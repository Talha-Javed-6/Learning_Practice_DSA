#include<iostream>
using namespace std;
//This Program will calculate the sum of two numbers entered by the user and print its result
int main()
{
    int a,b,sum;
    cout<<"Sum of Two Numbers"<<endl;
    cout<<"Enter 1st No. :";
    cin>>a;
    cout<<"Enter 2nd No. :";
    cin>>b;
    sum = a + b;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<sum<<endl;

    return 0;
}