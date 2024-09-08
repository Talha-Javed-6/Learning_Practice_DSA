#include<iostream>
using namespace std;
//This Program will find the Minimum number from two numbers entered by the user and print the min number
int main()
{
    int a,b,Min;
    cout<<"Min of Two Numbers"<<endl;
    cout<<"Enter 1st No. :";
    cin>>a;
    cout<<"Enter 2nd No. :";
    cin>>b;
    if(a<b){
        Min = a;
    }
    else{
        Min = b;
    }
    
    cout<<"Min Number from "<<a<<","<<b<<" is "<<Min<<endl;

    return 0;
}