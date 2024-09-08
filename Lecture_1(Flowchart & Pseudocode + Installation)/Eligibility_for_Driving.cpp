#include<iostream>
using namespace std;
//THis program will check the age of a person that he/she is eligible for Driving or Not
int main()
{
    int Age;
    cout<<"Check Eligibility Crieteria for Driving"<<endl;
    cout<<"Enter your Age to Check Eligibility: ";
    cin>>Age;
    if (Age>=18)
    {
        cout<<"Congrats!! You are Eligible for Driving.";
    }
    else
    {
        cout<<"Sorry!! You are Not Eligible for Driving.";
    }
    

    return 0;
}