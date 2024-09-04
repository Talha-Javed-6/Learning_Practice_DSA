#include<iostream>
using namespace std;
//This Program will find the Maximum number from two numbers entered by the user and print the Max number
int main()
{
    int a,b,Max;
    cout<<"Max of Two Numbers"<<endl;
    cout<<"Enter 1st No. :";
    cin>>a;
    cout<<"Enter 2nd No. :";
    cin>>b;
    if(a>b){
        Max = a;
    }
    else{
        Max = b;
    }
    
    cout<<"Max Number from "<<a<<","<<b<<" is "<<Max<<endl;

    return 0;
}