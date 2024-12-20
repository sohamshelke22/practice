#include<iostream>
#include<graphics.h>
#include<math.h>


void koch(int x1,int y1,int x2,int y2,int n)
{
    float angle=60*3.14/180;
    int x3=(2*x1+x2)/3;
    int y3=(2*y1+y2)/3;
    int x4=(x1+2*x2)/3;
    int y4=(y1+2*y2)/3;

    int x=x3+(x4-x3)*cos(angle)+(y4-y3)*sin(angle);
    int y=y3-(x4-x3)*sin(angle)+(y4-y3)*cos(angle);
    if(n>o)
    {
        koch(x1,y1,x3,y3,n-1);
        koch(x3,y3,x,y,n-1);
        koch(x,y,x4,y4,n-1);
        koch(x4,y4,x2,y2,n-1);
    }
    else
    {
        line(x1,y1,x3,y3);
        line(x3,y3,x,y);
        line(x,y,x4,y4);
        line(x4,y4,x2,y2);
    }
}
int main(){
    int n,x1=150,y1=200,x2=290,y2=400;
    cout<<"Enter level: ";
    cin>>n;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);

    koch(x1,y1,x2,y2,n);
    delay(10000);
    closegraph();

    return 0;
}