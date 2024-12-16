/*
Write a program in C++ to use map associative container. The keys will be the names of
states and the values will be the populations of the states. When the program runs, the
user is prompted to type the name of a state. The program then looks in the map, using
the state name as an index and returns the population of the state
*/


#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string,int>sp;
    sp["Maharashtra"]=100;
    sp["Rajasthan"]=87;
    sp["Uttarpradesh"]=200;
    sp["Madhyapradesh"]=150;
    sp["Kerla"]=400;
    sp["Goa"]=50;
    sp["Gujrat"]=300;
    sp["Karnataka"]=1000;
    string state;
    cout<<"Enter name of state: ";
    cin>>state;
    auto it=sp.find(state);

    if(it!=sp.end())
    {
        cout<<"Population of "<<state<<" is "<<it->second<<endl;
    }
    else
    {
        cout<<"State not found.";
    }
    return 0;
}







