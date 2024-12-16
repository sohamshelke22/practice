
/*#include<iostream>
using namespace std;
template<typename T>
void sort(T a[],int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(a[i],a[min]);
        }
    }
    cout<<"\nSorted array:";
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }
}
int main()
{
    int ch,n;
    int b[10];
    float f[10];
    cout<<"\n1.sort int.\n2.sort float.";
    cout<<"\nEnter choice:";
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"\nEnter no of elements:";
        cin>>n;
        cout<<"\nEnter elements:";
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort<int>(b,n);
        break;
    
    case 2:
        cout<<"\nEnter no of elements:";
        cin>>n;
        cout<<"\nEnter elements:";
        for(int i=0;i<n;i++)
        {
            cin>>f[i];
        }
        sort<float>(f,n);
        break;
    }
}*/




/*
#include<iostream>
using namespace std;
template<typename T>
void sort(T arr[],int n)
{
    int min,i,j;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(arr[i],arr[min]);
        }
    }
    cout<<"\nSorted array: ";
    for(int k=0;k<n;k++)
    {
        cout<<"\n"<<arr[k];
    }
}

int main()
{
    int ch,n;
    int in[10];
    float f[10];



    do
    {
        cout<<"\n1.Sort integer array .\n2.Sort float array .\n3.Exit."<<endl;
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter number of elements.";
                cin>>n;
                cout<<"Enter array elements: "<<endl;
                for(int i=0;i<n;i++)
                {
                    cin>>in[i];
                }
                sort<int>(in,n);
                break;

            case 2:
                cout<<"Enter number of elements. ";
                cin>>n;
                cout<<"Enter array elements: ";
                for(int i=0;i<n;i++)
                {
                    cin>>f[i];
                }
                sort<float>(f,n);
                break;

            case 3:
                cout<<"Exiting the code";
                break;
        }
    }while(ch!=3);
    return 0;
}
*/




#include<iostream>
using namespace std;
template<typename T>


void sort(T arr[],int n)
{
    int min,i,j;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(arr[i],arr[min]);
        }
    }
    cout<<"Sorted array: ";
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
}

int main()
{
    int ch;
    int n;
    int a[10];
    float b[10];
    do
    {
        cout<<"\n1.Sort integer array .\n2.Sort float array .\n3.Exit."<<endl;
        cout<<"Enter choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Enter no of elements";
            cin>>n;
            cout<<"Enter values:";
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            sort<int>(a,n);
            break;
        case 2:
            cout<<"Enter no of elements";
            cin>>n;
            cout<<"Enter values:";
            for(int i=0;i<n;i++)
            {
                cin>>b[i];
            }
            sort<float>(b,n);
            break;
        case 3:
            break;
        }
    } while (ch!=n);
    
}