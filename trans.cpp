#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm);
    int b[3][3];
    b[0][0]=x1;
    b[1][0]=y1;
    b[0][1]=x2;
    b[1][1]=y1;
    b[0][2]=x3;
    b[1][2]=y1;
    b[2][0]=b[2][1]=b[2][2]=1;
    setcolor(RED);
    line(b[0][0],b[1][0],b[0][1],b[1][1]);
    line(b[0][1],b[1][1],b[0][2],b[1][2]);
    line(b[0][2],b[1][2],b[0][0],b[1][0]);
    delay(5000);

    cout<<"\nEnter your choice\n1.translate.\n2.scale.\n3.rotate.";
    cin>>int ch;
    switch(ch)
    {
        case 1:
        {
            int a[3][3],c[3],[3];
            cout<<"\nEnter value of tx and ty:";
            cin>>a[0][2]>>a[1][2];
            a[0][0]=a[1][1]=a[2][2]=1;
            a[0][1]=a[1][0]=a[2][0]=a[2][1]=0;
            for(int i=0;i<3;i++)
            {

                for(int j=0;j<3;j++)
                {
                    c[i][j]=0;
                    for(int k=0;k<3;k++)
                    {
                        c[i][j]+=a[i][k]*b[j][k];
                    }
                }
                
            }
            setcolor(RED);
            line(b[0][0],b[1][0],b[0][1],b[1][1]);
            line(b[0][1],b[1][1],b[0][2],b[1][2]);
            line(b[0][2],b[1][2],b[0][0],b[1][0]);
            delay(5000);
            break;
        }
        case 2:
        {
            int a[3][3],c[3],[3];
            cout<<"\nEnter value of sx and sy:";
            cin>>a[0][0]>>a[1][1];
            a[2][2]=1;
            a[0][1]=a[0][2]=a[1][2]=a[1][0]=a[2][0]=a[2][1]=0;
            for(int i=0;i<3;i++)
            {

                for(int j=0;j<3;j++)
                {
                    c[i][j]=0;
                    for(int k=0;k<3;k++)
                    {
                        c[i][j]+=a[i][k]*b[j][k];
                    }
                }
                
            }
            setcolor(RED);
            line(b[0][0],b[1][0],b[0][1],b[1][1]);
            line(b[0][1],b[1][1],b[0][2],b[1][2]);
            line(b[0][2],b[1][2],b[0][0],b[1][0]);
            delay(5000);
            break;
        }
        case 3:
        {
            int a[3][3],c[3],[3];
            float d,A;
            cout<<"\nEnter angle:";
            cin>>d;
            A=(d*3.14)/180;

            
            a[0][0]=a[1][1]=cos(A);
            a[0][1]=(-sin(a));
            a[1][0]=sin(A);
            a[2][0]=a[2][1]=a[0][2]=a[1][2]=0;
            for(int i=0;i<3;i++)
            {

                for(int j=0;j<3;j++)
                {
                    c[i][j]=0;
                    for(int k=0;k<3;k++)
                    {
                        c[i][j]+=a[i][k]*b[j][k];
                    }
                }
                
            }
            setcolor(RED);
            line(b[0][0],b[1][0],b[0][1],b[1][1]);
            line(b[0][1],b[1][1],b[0][2],b[1][2]);
            line(b[0][2],b[1][2],b[0][0],b[1][0]);
            delay(5000);
            break;
        }
    }
    

    closegraph();
    return 0;
}