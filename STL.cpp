
/*
Write C++ program using STL for sorting and searching user defined records such as
personal records (Name, DOB, Telephone number etc) using vector
*/


// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<string>
// using namespace std;

// struct Record
// {
//     string name,dob,tel;
// };

// bool comparerecords(const Record& a,const Record& b)
// {
//     return a.name<b.name;
// }

// int main()
// {
//     vector<Record> r;
//     int n;
//     cout<<"\nEnter number of records: ";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         Record robj;
//         cout<<"Enter name: ";
//         cin>>robj.name;
//         cout<<"Enter DOB(dd/mm/yyyy): ";
//         cin>>robj.dob;
//         cout<<"Enter telephone number: ";
//         cin>>robj.tel;

//         r.push_back(robj);
//     }
//     sort(r.begin(),r.end(),comparerecords);
//     cout<<"\nSorted records: ";
//     for(const Record& robj:r)
//     {
//         cout<<"\nName:"<<robj.name<<"\nDOB:"<<robj.dob<<"\nTelephone number:"<<robj.tel<<endl;
//     }
//     string target;
//     cout<<"Enter name to search";
//     cin>>target;
//     auto it=find_if(r.begin(),r.end(),[&target](const Record &robj)
//     {
//         return robj.name==target;
//     });
//     if(it!=r.end())
//     {
//         cout<<"Record found: "<<it->name<<endl;
//     }
//     else
//     {
//         cout<<"Record not fount."<<endl;
//     }
//     return 0;
// }











#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

struct record
{
    string name,dob,tel;
};

bool comparerecords(const record& a,const record& b)
{
    return a.name<b.name;
}

int main()
{
    vector<record> r;
    int n;
    cout<<"nmber of records? ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        record robj;
        cout<<"enter name: ";
        cin>>robj.name;
        cout<<"enter dob: ";
        cin>>robj.dob;
        cout<<"enter tel: ";
        cin>>robj.tel;

        r.push_back(robj);
    }
    sort(r.begin(),r.end(),comparerecords);
    cout<<"Sorted records: ";
    for(const record& robj:r)
    {
        cout<<"\nName:"<<robj.name<<"\nDOB:"<<robj.dob<<"\nTelephone number:"<<robj.tel<<endl;
    }
    string target;
    cout<<"enter name to search: ";
    cin>>target;
    auto it=find_if(r.begin(),r.end(),[&target](const record &robj)
    {
        return robj.name==target;
    });
    if(it!=r.end())
    {
        cout<<"element found: "<<it->name;
    }
    else
    {
        cout<<"not found.";
    }

}
