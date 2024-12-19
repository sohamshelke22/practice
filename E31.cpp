// /*
// A double-ended queue (deque) is a linear list in which additions and deletions may be
// made at either end. Obtain a data representation mapping a deque into a onedimensional array. Write C++ program to simulate deque with functions to add and
// delete elements from either end of the deque.
// */

// #include<iostream>
// using namespace std;
// #define size 10

// class deque
// {
//     public:
//         int front,rear,n;
//         int q[size];
//         deque()
//         {
//             front=rear=-1;
//             cout<<"\nEnter no of elements: ";
//             cin>>n;
//         }
//         int isfull()
//         {
//             if((front==0 && rear>=n-1)|| front==rear+1)
//             {
//                 return 1;
//             }
//             else
//             {
//                 return 0;
//             }
//         }
//         int isempty()
//         {
//             if(rear==-1)
//             {
//                 return 1;
//             }
//             else
//             {
//                 return 0;
//             }
//         }
//         void enqueuef()
//         {
//             int id;
//             cout<<"\nenter elements: ";
//             cin>>id;
//             if(isfull())
//             {
//                 cout<<"\nqueue is full";
//             }
//             else
//             {
//                 if(front==-1)
//                 {
//                     front=rear=0;
//                 }
//                 else if(front==0)
//                 {
//                     front=n-1;
//                 }
//                 else
//                 {
//                     front--;
//                 }
//                 q[front]=id;
                
//             }
//         }
//         void enqueuer()
//         {
//             int id;
//             cout<<"\nenter elements: ";
//             cin>>id;
//             if(isfull())
//             {
//                 cout<<"\nqueue is full";
//             }
//             else
//             {
//                 if(front==-1)
//                 {
//                     front=rear=0;
//                 }
//                 else if(rear==n-1)
//                 {
//                     rear=0;
//                 }
//                 else
//                 {
//                     rear++;
//                 }
//                 q[rear]=id;
                
//             }
//         }
//         void dequeuef()
//         {
//             int x;
//             if(isempty())
//             {
//                 cout<<"\nqueue is empty";
//             }
//             else
//             {
//                 if(front==rear)
//                 {
//                     front=rear=-1;
//                 }
//                 else if(front=n-1)
//                 {
//                     front=0;
//                 }
//                 else
//                 {
//                     front++;
//                 }
                
//             }
//         }
//         void dequeuer()
//         {
//             int x;
//             if(isempty())
//             {
//                 cout<<"\nqueue is empty";
//             }
//             else
//             {
//                 if(front==rear)
//                 {
//                     front=rear=-1;
//                 }
//                 else if(rear==0)
//                 {
//                     rear=n-1;
//                 }
//                 else
//                 {
//                     rear--;
//                 }
                
                
//             }
//         }

//         void display()
//         {
//             if(isempty())
//             {
//                 cout<<"\nQueue is empty";
//             }
//             else
//             {
//                 int i=front;
//                 while(true)
//                 {
//                     cout<<q[i]<<" ";
//                     if(i==rear)
//                     {
//                         break;
//                     }
//                     i=(i+1)%n;
//                 }
                
//             }
//         }
// };
// int main()
// {
//     deque obj;
//     int ch;
//     bool flag=true;
//     while(flag)
//     {
//         bool flag = true;
//         cout<<"\n****YOUR CHOICES ARE****\n";
//         cout<<"\n1. Enqueue(at front) \n2. Enqueue(at rear) \n3. Dequeue(at front) \n4.Dequeue(at rear) \n5. Display queue \n6. Exit";
//         cout<<"\nEnter your choice: ";
//         cin>>ch;
//         switch (ch)
//         {
//         case 1:
//             obj.enqueuef();
//             obj.display();
//             break;
//         case 2:
//             obj.enqueuer();
//             obj.display();
//             break;
//         case 3:
//             obj.dequeuef();
//             obj.display();
//             break;
//         case 4:
//             obj.dequeuer();
//             obj.display();
//             break;
//         case 5:
//             obj.display();
//             break;
//         case 6:
//             flag=false;
//             break;
//         default:
//             break;
//         }

//     }
    
//     return 0;
// }































#include<iostream>
using namespace std;
#define size 10

class deque
{
    public:
        int front,rear,n;
        int dq[size];
        deque()
        {
            front=rear=-1;
            cout<<"Number of elements: ";
            cin>>n;
        }
        
        bool isfull()
        {
            return (front==0 && rear>=n-1)||front==rear+1;
        }

        bool isempty()
        {
            return rear==-1;
        }

        void enqueuef()
        {
            int x;
            cout<<"Enter element: ";
            cin>>x;
            if(isfull())
            {
                cout<<"Deque overflow.";
            }
            else
            {
                if(front==-1)
                {
                    front=rear=0;
                }
                else if(front==0)
                {
                    front=n-1;
                }
                else
                {
                    front--;
                }
                dq[front]=x;
            }
        }

        void enqueuer()
        {
            int x;
            cout<<"Enter element: ";
            cin>>x;
            if(isfull())
            {
                cout<<"Deque overflow.";
            }
            else
            {
                if(front==-1)
                {
                    front=rear=0;
                }
                else if(rear==n-1)
                {
                    rear=0;
                }
                else
                {
                    rear++;
                }
                dq[rear]=x;
            }
        }

        void dequeuef()
        {
            if(isempty())
            {
                cout<<"Deque underflow.";
            }
            else
            {
                if(front==rear)
                {
                    front=rear=-1;
                }
                else if(front==n-1)
                {
                    front=0;
                }
                else
                {
                    front++;
                }
            }
        }

        void dequeuer()
        {
            if(isempty())
            {
                cout<<"Deque underflow.";
            }
            else
            {
                if(front==rear)
                {
                    front=rear=-1;
                }
                else if(rear==0)
                {
                    rear=n-1;
                }
                else
                {
                    rear--;
                }
            }
        }

        void display()
        {
            if(isempty())
            {
                cout<<"Deque underflow.";
            }
             else
               {
                 int i=front;
                 while(true)
                 {
                     cout<<dq[i]<<" ";
                     if(i==rear)
                     {
                         break;
                     }
                     i=(i+1)%n;
                 }
                 }
        }
};

int main()
{
    deque obj;
    int ch;
    bool flag=true;
    while(flag)
    {
        // bool flag = true;
        cout<<"\n****YOUR CHOICES ARE****\n";
        cout<<"\n1. Enqueue(at front) \n2. Enqueue(at rear) \n3. Dequeue(at front) \n4.Dequeue(at rear) \n5. Display queue \n6. Exit";
        cout<<"\nEnter your choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            obj.enqueuef();
            obj.display();
            break;
        case 2:
            obj.enqueuer();
            obj.display();
            break;
        case 3:
            obj.dequeuef();
            obj.display();
            break;
        case 4:
            obj.dequeuer();
            obj.display();
            break;
        case 5:
            obj.display();
            break;
        case 6:
            flag=false;
            break;
        default:
            break;
        }

    }
    return 0;

}