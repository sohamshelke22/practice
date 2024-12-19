
/*In any language program mostly syntax error occurs due to unbalancing delimiter such as
(),{},[]. Write C++ program using stack to check whether given expression is well
parenthesized or not.
*/

// #include<iostream>
// using namespace std;
// #define size 10

// class stack
// {
//     public:
//         int top;
//         char a;
//         char s[size];
//         stack()
//         {
//             top=-1;
//         }
//         int isfull()
//         {
//             return top==size-1;
//         }
//         int isempty()
//         {
//             return top==-1;
//         }
//         void push(int x)
//         {
//             if(!isfull())
//             {
//                 top=top+1;
//                 s[top]=x;
//             }
//         }
//         char pop()
//         {
//             if(!isempty())
//             {
//                 a=s[top];
//                 top=top-1;
//                 return a;
//             }
//             return '\0';
//         }
// };

// int main()
// {
//     stack sobj;
//     int i=0;
//     char exp[size];
//     cout<<"\nEnter expression";
//     cin>>exp;
//     if(exp[0]==')'||exp[0]==']'||exp[0]=='}')
//     {
//         cout<<"\nNot well parenthesized";
//     }
//     else
//     {
//         bool wellparenthesized=true;
//         while (exp[i]!='\0')
//         {
//             char ch=exp[i];
//             switch (ch)
//             {
//             case '(':case '[':case '{':
//                 sobj.push(ch);
//                 break;

//             case ')':
//                 if(sobj.isempty()||sobj.pop()!='(')
//                 {
//                     wellparenthesized=false;
//                 }
//                 break;
//             case ']':
//                 if(sobj.isempty()||sobj.pop()!='[')
//                 {
//                     wellparenthesized=false;
//                 }
//                 break;
//             case '}':
//                 if(sobj.isempty()||sobj.pop()!='{')
//                 {
//                     wellparenthesized=false;
//                 } 
//                 break;  
//             }
//             if (!wellparenthesized) break;
//             i++;
//         }
//         if(wellparenthesized && sobj.isempty())
//         {
//             cout<<"\nexpression well parenthesized.";
//         }
//         else
//         {
//             cout<<"\nexpression not well parenthesized.";
//         }
        
//     }
//     return 0;
// }





#include<iostream>
using namespace std;
#define size 10

class stack
{
    public:
        int top;
        char s[size];
        stack()
        {
            top=-1;
        }

        int isempty()
        {
            return top==-1;
        }
        int isfull()
        {
            return top==size-1;
        }
        void push(int x)
        {
            if(!isfull())
            {
                top=top+1;
                s[top]=x;
            }
        }
        char pop()
        {
            if(!isempty())
            {
                int a=s[top];
                top=top-1;
                return a;
            }
            return '\0';
        }
};
int main()
{
    stack sobj;
    char exp[size];
    cout<<"Enter expression to check.";
    cin>>exp;
    int i=0;
    if(exp[0]==')'||exp[0]==']'||exp[0]=='}')
    {
        cout<<"Not well parenthesized.";
    }
    else
    {
        bool wellparenthesized=true;
        while(exp[i]!='\0')
        {
            
            char ch=exp[i];
            switch(ch)
            {
                case '(' : case '[' : case '{' :
                {
                    sobj.push(ch);
                    break;
                }
                case ')':
                {
                    if(sobj.isempty()||sobj.pop()!='(')
                    {
                        wellparenthesized=false;
                    }
                    break;
                }
                case ']':
                {
                    if(sobj.isempty()||sobj.pop()!='[')
                    {
                        wellparenthesized=false;
                    }
                    break;
                }
                case '}':
                {
                    if(sobj.isempty()||sobj.pop()!='{')
                    {
                        wellparenthesized=false;
                    }
                    break;
                }
            }
            if(!wellparenthesized)
            {
                break;
            }
            i++;
        }
        if(wellparenthesized && sobj.isempty())
        {
            cout<<"Expression is well parenthesized.";
        }
        else
        {
            cout<<"Not well parenthesized.";
        }

    }

    return 0;
}


