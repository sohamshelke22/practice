#include <iostream>
using namespace std;

class complex{
  float real,img;
  friend ostream & operator <<(ostream &out,complex const &obj);
  friend istream & operator >>(istream &in,complex &obj);
  public:
    complex(float r=0,float i=0)
    {
        real=r;
        img=i;
    }
    complex operator +(complex const &obj)
    {
        complex res;
        res.real=real+obj.real;
        res.img=img+obj.img;
        return res;
    }
    complex operator *(complex const &obj)
    {
        complex res;
        res.real=(real*obj.real)-(img*obj.img);
        res.img=(real*obj.img)+(img*obj.real);
        return res;
    }
};
ostream & operator <<(ostream &out,complex const &obj)
{
    out<<obj.real;
    out<<"+ i"<<obj.img;
    return out;
}
istream & operator >>(istream &in,complex &obj)
{
    cout<<"Enter real :";
    in>>obj.real;
    cout<<"Enter img:";
    in>>obj.img;
    return in;
}
int main()
{
       complex c1,c2,c3,c4;
       cout<<"Enter first number:";
       cin>>c1;
       cout<<"Enter second number:";
       cin>>c2;
       cout<<c1;
       c3=c1+c2;
       c4=c1*c2;
       cout<<c3;
       cout<<c4;
}












