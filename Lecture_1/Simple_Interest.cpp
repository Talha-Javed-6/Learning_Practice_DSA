#include<iostream>
using namespace std;
//This program will calculate the simple interest bu using formula S.I = Principal Amount * Rate * Time (in years)
int main(){
    float P,R,T,S_I;
    cout<<"Interest Calculator"<<endl;
    cout<<"Enter the Principal Amount of Loan: ";
    cin>>P;
    cout<<"Enter the Rate at which loan is availed: ";
    cin>>R;
    cout<<"Enter the Time Duration(years) of Loan: ";
    cin>>T;
    S_I = (P * R * T);
    cout<<"The Simple Interest  on your loan is: "<<S_I;

    return 0 ;

}