// /*
// Queues are frequently used in computer programming, and a typical example is the
// creation of a job queue by an operating system. If the operating system does not use
// priorities, then the jobs are processed in the order they enter the system. Write C++
// program for simulating job queue. Write functions to add job and delete job from queue
// */

// // #include<iostream>
// // using namespace std;
// // #define size 10

// // class queue
// // {
// //     public:
// //         int front,rear;
// //         int q[size];
// //         queue()
// //         {
// //             front=rear=-1;
// //         }
// //         int isempty()
// //         {
// //             if(front==-1||front>rear)
// //             {
// //                 return 1;
// //             }
// //             else
// //             {
// //                 return 0;
// //             }
// //         }
// //         int isfull()
// //         {
// //             if(rear>=size)
// //             {
// //                 return 1;
// //             }
// //             else
// //             {
// //                 return 0;
// //             }
// //         }
// //         void enqueue(int x)
// //         {
// //             if(isfull())
// //             {
// //                 cout<<"Queue full";
// //             }
// //             else
// //             {
// //                 if(front==-1)
// //                 {
// //                     front=front+1;
// //                 }
// //                 rear=rear+1;
// //                 q[rear]=x;
                
// //             }
// //         }
// //         void dequeue()
// //         {
// //             int x;
// //             if(isempty())
// //             {
// //                 cout<<"\nQueue empty";
// //             }
// //             else
// //             {
// //                 x=q[front];
// //                 front++;
// //                 cout<<"job"<<"["<<x<<"]"<<" deleted";
// //             }
// //         }
// //         void display()
// //         {
// //             for(int i=front;i<=rear;i++)
// //             {
// //                 cout<<'['<<q[i]<<']';
// //             }
// //         }
// // };

// // int main()
// // {
// //     int n,job,ch;
// //     queue qobj;
// //     cout<<"\nEnter no of jobs";
// //     cin>>n;
// //     for(int i=0;i<n;i++)
// //     {
// //         cout<<"\nEnter job entries:";
// //         cin>>job;
// //         qobj.enqueue(job);
// //     }
// //     while(1)
// //     {
// //         cout<<"\n1.Add job.\n2.delete job.\n3.display queue.\n4.exit";
// //         cin>>ch;
// //         switch (ch)
// //         {
// //         case 1:
// //             cout<<"\nEnter job entries:";
// //             cin>>job;
// //             qobj.enqueue(job);
// //             break;
// //         case 2:
            
// //             qobj.dequeue();
// //             break;
// //         case 3:
// //             qobj.display();
// //         default:
// //             break;
// //         }
// //     }
    
// //     return 0;
// // }







// #include<iostream>
// using namespace std;
// #define size 30

// class queue
// {
//     public:
//         int front;
//         int rear;
//         int q[size];
//         queue()
//         {
//             front=rear=-1;
//         }
//         int isempty()
//         {
//             if(front==-1||front>rear)
//             {
//                 return 1;
//             }
//             else
//             {
//                 return 0;
//             }
//         }
//         int isfull()
//         {
//             if(rear>=size)
//             {
//                 return 1;
//             }
//             else
//             {
//                 return 0;
//             }
//         }
//         void enqueue(int x)
//         {
//             if(!isfull())
//             {
//                 if(front==-1)
//                 {
//                     front=front+1;
//                 }
//                 rear=rear+1;
//                 q[rear]=x;
//             }
//             else
//             {
//                 cout<<"Queue full.";
//             }
//         }
//         int dequeue()
//         {
//             if(!isempty())
//             {
//                 int a=q[front];
//                 front++;
//                 cout<<"Job ["<<a<<"] deleted";
//             }
//             else
//             {
//                 cout<<"Queue is empty.";
//             }
//         }

//         void display()
//         {
//             for(int i=front;i<=rear;i++)
//             {
//                 cout<<"["<<q[i]<<"]";
//             }
//         }

// };

// int main()
// {
//     queue qobj;
//     int job;
//     int n;
//     cout<<"Enter number of jobs.";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cout<<"\nEnter jobs: ";
//         cin>>job;
//         qobj.enqueue(job);
//     }
//     int ch;
//     while(1)
//     {
//         cout<<"\n1.Add jobs.\n2.Delete jobs.\n3.Display jobs.\n4.Exit."<<endl;
//         cin>>ch;
//         switch(ch)
//         {
//             case 1:
//             {
//                 cout<<"Enter additonal job:";
//                 cin>>job;
//                 qobj.enqueue(job);
//                 break;
//             }
//             case 2:
//             {
//                 qobj.dequeue();
//                 break;
//             }
//             case 3:
//             {
//                 qobj.display();
//                 break;
//             }
//             case 4:
//             {
//                 cout<<"Exiting...";
//                 break;
//             }
//         }
//     }
//     return 0;
// }
















#include<iostream>
using namespace std;
#define size 10

class queue
{
    public:
        int front;
        int rear;
        int q[size];

        queue()
        {
            front=rear=-1;
        }

        bool isempty()
        {
            return front==-1||front>rear;
        }
        
        bool isfull()
        {
            return rear>size-1;
        }

        void enqueue(int x)
        {
            if(isfull())
            {
                cout<<"Queue overflow.";
            }
            else
            {
                if(front==-1)
                {
                    front=0;
                }
                rear=rear+1;
                q[rear]=x;
            }
        }

        void dequeue()
        {
            if(isempty())
            {
                cout<<"Queue underflow.";
            }
            else
            {
                int x=q[front];
                front++;
            }
        }

        void display()
        {
            if(isempty())
            {
                cout<<"Queue underflow.";
            }
            else
            {
                for(int i=front;i<=rear;i++)
                {
                    cout<<"[ "<<q[i]<<" ]";
                }
            }
        }
};

int main()
{
    queue qobj;
    int job;
    int n;
    cout<<"Enter number of jobs.";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter jobs: ";
        cin>>job;
        qobj.enqueue(job);
    }
    int ch;
    while(1)
    {
        cout<<"\n1.Add jobs.\n2.Delete jobs.\n3.Display jobs.\n4.Exit."<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"Enter additonal job:";
                cin>>job;
                qobj.enqueue(job);
                qobj.display();
                break;
            }
            case 2:
            {
                qobj.dequeue();
                qobj.display();
                break;
            }
            case 3:
            {
                qobj.display();
                break;
            }
            case 4:
            {
                cout<<"Exiting...";
                break;
            }
        }
    }
    return 0;
}
