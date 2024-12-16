/*
Write a C++ program that creates an output file, writes information to it, closes the file,
open it again as an input file and read the information from the file.

*/


#include<iostream>
#include<fstream>
using namespace std;
class student
{
    public:
        int rollno;
        char name[30];
        int marks;

        student(){}
        void getdata();
        void displaydata();

};
void student::getdata()
{
    cout<<"Enter roll number: ";
    cin>>rollno;
    cin.ignore();
    cout<<"Enter name: ";
    cin.getline(name,30);
    cout<<"Enter marks: ";
    cin>>marks;
}
void student::displaydata()
{
    cout<<"\nROLL NO : "<<rollno;
    cout<<"\nNAME : "<<name;
    cout<<"\nMARKS : "<<marks;

}
int main()
{
    student s[70];
    fstream file;
    int n,i;
    cout<<"Enter number of students: ";
    cin>>n;
    file.open("sam.txt",ios::out);
    for(i=0;i<n;i++)
    {
        s[i].getdata();
        file.write((char *)&s[i],sizeof(s[i]));
    }
    file.close();

    file.open("sam.txt",ios::in);
    
        for(i=0;i<n;i++)
        {
            file.read((char*)&s[i],sizeof(s[i]));
            s[i].displaydata();
        }
        file.close();
        return 0;
    

}