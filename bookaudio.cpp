/*#include<iostream>
using namespace std;

class publication{
    string title;
    float price;
    public:
        void add(){
            cout<<"\nEnter title of publication: ";
            cin.ignore();
            getline(cin,title);
            cout<<"\n Enter price of publication: ";
            cin>>price;
        }
        void display(){
            cout<<"\n Title of publication: "<<title;
            cout<<"\n Price of publication: "<<price;
        }
};
class book:public publication{
    int page_count;
    public:
        void add_book()
        {
            try
            {
                add();
                cout<<"Enter page count of book: ";
                cin>>page_count;

                if(page_count<=0)
                {
                    throw page_count;
                }
            }
            catch(...)
            {
                cout<<"Invalid page count: ";
                page_count=0;
            }
        }
        void display_book()
        {
            display();
            cout<<"\nPage count  :"<<page_count;

        }

};
class tape:public publication{
    float play_time;
    public:
        void add_tape(){
            try{
                add();
                cout<<"Enter play time of tape: ";
                cin>>play_time;
                if(play_time<=0)
                {
                    throw play_time;
                }
            }
            catch(...){
                cout<<"Invalid play time:";
                play_time=0;
            }
        }
        void display_tape(){
            display();
            cout<<"Play time: "<<play_time;
        }

};
int main(){
    book b1[10];
    tape t1[10];
    int ch=0,b_count=0,t_count=0;
    do{
        cout<<"\n------------MENU----------"<<endl;
        cout<<"\n 1.Add information to books.";
        cout<<"\n 2.Add information to tapes.";
        cout<<"\n 3.Display information of books.";
        cout<<"\n 4.Display information of tapes.";
        cout<<"\n 5.exit.";
        cout<<"\nEnter choice:";
        cin>>ch;
        switch(ch){
            case 1:
            {
                b1[b_count].add_book();
                b_count++;
                break;

            }
            case 2:
            {
                t1[t_count].add_tape();
                t_count++;
                break;

            }
            case 3:
            {
                for(int i=0;i<=b_count;i++)
                {
                    b1[i].display_book();
                }
                break;

            }
            case 4:
            {
                for(int i=0;i<=t_count;i++)
                {
                    t1[i].display_tape();
                }
                break;

            }

            case 5:
            {
                cout<<"Invalid choice.";
                break;
            }
        }
    }while(ch!=5);
    return 0;
}*/













































#include<iostream>
#include<string>
using namespace std;

class publication
{
    string name;
    float price;
    public:
        void add()
        {
            cout<<"enter name; ";
            cin.ignore();
            getline(cin,name);
            cout<<"enter price: ";
            cin>>price;
        }
        void display()
        {
            cout<<"\nname: "<<name;
            cout<<"\nprice: "<<price;
        }
};

class book:public publication
{
    int page_count;
    public:
        void add_book()
        {
        try
        {
            add();
            cout<<"Enter page count: ";
            cin>>page_count;
            if(page_count<=0)
            {
                throw page_count;
            }
        }
        catch(...)
        {
            cout<<"invalid page count...";
            page_count=0;
        }
        }

        void display_book()
        {
            display();
            cout<<"\nPage count: "<<page_count;
        }
};

class tape:public publication
{
    int play_time;
    public:
        void add_tape()
        {
            try
            {
                add();
                cout<<"Enter play time: ";
                cin>>play_time;
                if(play_time<=0)
                {
                    throw play_time;
                }
            }
            catch(...)
            {
                cout<<"invalid play time...";
                play_time=0;
            }
        }

        void display_tape()
        {
            display();
            cout<<"Play time: "<<play_time;
        }
};

int main()
{
    book b[10];
    tape t[10];
    int b_count=0,t_count=0,ch=0;
    do
    {
        cout<<"\n------------MENU----------"<<endl;
        cout<<"\n 1.Add information to books.";
        cout<<"\n 2.Add information to tapes.";
        cout<<"\n 3.Display information of books.";
        cout<<"\n 4.Display information of tapes.";
        cout<<"\n 5.exit.";
        cout<<"\nEnter choice:";
        cin>>ch;
        switch (ch)
        {
            case 1:
                {   if(b_count>10)
                    {
                        cout<<"error";
                    }
                    else
                    {
                        b[b_count].add_book();
                        b_count++;
                        break;
                    }
                }
            case 2:
                {   
                    if(t_count>10)
                    {
                        cout<<"error";
                    }
                    else
                    {
                        t[t_count].add_tape();
                        t_count++;
                        break;
                    }
                    
                }   
            case 3:
                
                    if (b_count == 0) 
                    {
                        cout << "No books to display.\n";
                    }   
                    else 
                    {
                        for (int i = 0; i < b_count; i++) 
                        {
                             b[i].display_book();
                        }
                    }
                    break;
                
            case 4:
                if (b_count == 0) 
                    {
                        cout << "No books to display.\n";
                    }   
                    else 
                    {
                        for (int i = 0; i < b_count; i++) 
                        {
                             b[i].display_book();
                        }
                    }
                    break;
            case 5:
                break;
        }
    } while (ch!=5);
    
    return 0;
}