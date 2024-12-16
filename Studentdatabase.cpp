/*
Develop an object oriented program in C++ to create 
a database of student information system containing the following information: Name, 
Roll number, Class, division, Date of Birth, Blood group, Contact address, telephone 
number, driving license no. etc Construct the database with suitable member functions for 
initializing and destroying the data viz constructor, default constructor, Copy constructor, 
destructor, static member functions, friend class, this pointer, inline code and dynamic 
memory allocation operators-new and delete
*/
/*
#include<iostream>
using namespace std;
class studdata;
class student
{
    string name;
    int roll_no;
    string cls;
    char *div;
    string dob;
    char *bloodgroup;
    static int count;
    
    public:
        student()
        {
            name="";
            roll_no=0;
            cls="";
            div=new char;
            dob="dd/mm/yyyy";
            bloodgroup=new char[4];
        }
        ~student()
        {
            delete div;
            delete[] bloodgroup;
        }
        static int getcount()
        {
            return count;
        }
        void getdata(studdata *);
        void displaydata(studdata *);


};
class studdata
{
    string caddress;
    long int *telno;
    long int *dlno;
    friend class student;
    public:
        studdata()
        {
            caddress=" ";
             telno=new long;
             dlno=new long;
        }
        ~studdata()
        {
            delete telno;
            delete dlno;
        }
        void getstuddata()
        {
            cout<<"Enter contact address : ";
            cin.ignore();
            getline(cin,caddress);
            cout<<"\nEnter telephone number : ";
            cin>>*telno;
            cout<<"\nEnter driving license number : ";
            cin>>*dlno;
        }
        void dispstuddata()
        {
            cout<<"\nCONTACT ADDRESS ---------------------------------: "<<caddress;
            cout<<"\nTELEPHONE NUMBER --------------------------------: "<<*telno;
            cout<<"\nDRIVING LICENSE NUMBER --------------------------: "<<*dlno;

        }
};
inline void student::getdata(studdata * obj)
{
    cout<<"\nEnter student name: ";
    cin>>name;
    cout<<"\nEnter roll number: ";
    cin>>roll_no;
    cout<<"\nEnter class: ";
    cin>>cls;
    cout<<"\nEnter division: ";
    cin>>div;
    cout<<"\nEnter date of birth: ";
    cin>>dob;
    cout<<"\nEnter bloodgroup: ";
    cin>>bloodgroup;
    obj->getstuddata();
    count++;
}
inline void student::displaydata(studdata * obj1)
{
    cout<<"\nName: "<<name;
    cout<<"\nRoll number: "<<roll_no;
    cout<<"\nClass: "<<cls;
    cout<<"\nDivision: "<<div;
    cout<<"\nDate of birth: "<<dob;
    cout<<"Bloodgroup: "<<bloodgroup;
    obj1->dispstuddata();

}
int student::count;
int main()
{
    student* stud1[100];
    studdata* stud2[100];
    int n=0;
    char ch;
    do
    {
        stud1[n]=new student;
        stud2[n]=new studdata;
        stud1[n]->getdata(stud2[n]);
        n++;
        cout<<"\nDo you want to continue(y,n)? ";
        cin>>ch;
    } while (ch=='y');
    for(int i=0;i<n;i++)
    {
        stud1[i]->displaydata(stud2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        delete stud1[i];
        delete stud2[i];
    }
    
    
    return 0;
}
*/







/*
Develop an object oriented program in C++ to create 
a database of student information system containing the following information: Name, 
Roll number, Class, division, Date of Birth, Blood group, Contact address, telephone 
number, driving license no. etc Construct the database with suitable member functions for 
initializing and destroying the data viz constructor, default constructor, Copy constructor, 
destructor, static member functions, friend class, this pointer, inline code and dynamic 
memory allocation operators-new and delete
*/

#include<iostream>
using namespace std;
class studdata;
class student
{
    string name;
    int roll;
    string cls;
    char *div;
    string dob;
    char *bldgrp;
    static int count;
    public:
        student()
        {
            name="";
            roll=0;
            cls="";
            div=new char;
            dob="dd/mm/yyyy";
            bldgrp=new char[4];
        }
        ~student()
        {
            delete div;
            delete[] bldgrp;
        }
        static int getcount()
        {
            return count;
        }
        void getdata(studdata* );
        void displaydata(studdata *);
};

class studdata
{
    friend class student;
    string address;
    long int *tel;
    long int *dlno;
    public:
        studdata()
        {
            address="";
            tel=new long;
            dlno=new long;
        }
        ~studdata()
        {
            delete tel;
            delete dlno;
        }
        void getstuddata()
        {
            cout<<"Enter address: ";
            cin.ignore();
            getline(cin,address);
            cout<<"enter tel:";
            cin>>*tel;
            cout<<"enter dlno:";
            cin>>*dlno;
        }
        void dispstuddata()
        {
            cout<<"\naddress: "<<address;
            cout<<"\ntel no: "<<*tel;
            cout<<"\ndl no: "<<*dlno;
        }
};

inline void student::getdata(studdata* obj)
{
    
    cout<<"\nEnter student name: ";
    cin>>name;
    cout<<"\nEnter roll number: ";
    cin>>roll;
    cout<<"\nEnter class: ";
    cin>>cls;
    cout<<"\nEnter division: ";
    cin>>div;
    cout<<"\nEnter date of birth: ";
    cin>>dob;
    cout<<"\nEnter bloodgroup: ";
    cin>>bldgrp;
    obj->getstuddata();
    count++;
}

inline void student::displaydata(studdata * obj)
{
    cout<<"\nName: "<<name;
    cout<<"\nRoll number: "<<roll;
    cout<<"\nClass: "<<cls;
    cout<<"\nDivision: "<<div;
    cout<<"\nDate of birth: "<<dob;
    cout<<"\nBloodgroup: "<<bldgrp;
    obj->dispstuddata();
}
int student::count;
int main()
{

    student* s1[100];
    studdata* s2[100];
    int n=0;
    char ch,y;
    do
    {
        s1[n]=new student;
        s2[n]=new studdata;
        s1[n]->getdata(s2[n]);
        n++;
        cout<<"continue?(y/n)";
        cin>>ch;

    } while (ch==y);
    for (int i = 0; i < n; i++)
    {
        s1[i]->displaydata(s2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        delete s1[i];
        delete s2[i];
    }

    
    
}

