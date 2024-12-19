// /*Pizza parlor accepting maximum M orders. Orders are served in first come first served
// basis. Order once placed cannot be cancelled. Write C++ program to simulate the system
// using circular queue using array.*/
// /*
// A double-ended queue (deque) is a linear list in which additions and deletions may be
// made at either end. Obtain a data representation mapping a deque into a onedimensional array. Write C++ program to simulate deque with functions to add and
// delete elements from either end of the deque.
// */

#include<iostream>
using namespace std;
#define size 5

class cqueue
{
public:
    int q[size];
    int front,rear;
    cqueue()
    {
        front=-1;
        rear=-1;
    }

    int isfull()
    {
        if((front==0 && rear==size-1)||(rear==front-1))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int isempty()
    {
        if(front==-1 && rear==-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void enqueue(int x)
    {
        if(isfull())
        {
            cout<<"order limit reached.";
        }
        else
        {
            if(front==-1)
            {
                front=rear=0;
            }
            else if(rear==size-1)
            {
                rear=0;
            }
            else
            {
                rear=rear+1;
            }
            q[rear]=x;
        }
    }

    void display()
    {
        if(isempty())
        {
            cout<<"No orders placed...";
        }
        else
        {
            if(front==rear)
            {
                cout<<q[front];
            }
            else if(front<rear)
            {
                for(int i=front;i<=rear;i++)
                {
                    cout<<q[i]<<" ";
                }
            }
            else
            {
                for(int i=front;i<size;i++)
                {
                    cout<<q[i]<<" ";
                }
                for(int i=0;i<=rear;i++)
                {
                    cout<<q[i]<<" ";
                }
            }
        }
    }

    void payment(int n)
    {
        if(isempty())
        {
            cout<<"No order present."<<endl;
        }
        else
        {
            cout<<"Total amount to pay: "<<n*100;
        }
    }
};
int main()
{
    cqueue c;
    int ch,x,n;
    do
    {
        cout<<"\n1.place order.\n2.Make payment.\n3.display orders.\n4.exit.";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"\n1.Veg pizza.\n2.Paneer pizza.\n3.Cheese pizza";
            cin>>x;
            c.enqueue(x);
            break;

        case 2:
            cout<<"How many pizzas? ";
            cin>>n;
            c.payment(n);
            break;
        case 3:
            cout<<"Orders :";
            c.display();
            break;

        case 4:
            cout<<"Exiting...";
            break;
        default:
            break;
        }
    } while (ch!=4);
    
}

















    // void dequeue()
    // {
    //     if(isempty())
    //     {
    //         cout<<"No orders placed...";
    //     }
    //     else
    //     {
    //         if(front==rear)
    //         {
    //             front=rear=-1;
    //         }
    //         else if(front==size-1)
    //         {
    //             front=0;
    //         }
    //         else
    //         {
    //             front++;
    //         }
            
    //     }
    // }