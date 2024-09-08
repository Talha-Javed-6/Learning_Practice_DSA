#include<iostream>
using namespace std;
//This Program Will be a basic calculator which perform some basic operations 
int main(){
    cout<<"------Calculator------"<<endl;
    int num_1,num_2;
    string operation;
    cout<<"Enter First Number: ";
    cin>>num_1;
    cout<<"Enter Second Number: ";
    cin>>num_2;
    cout<<"Enter Operator(+,-,*,/,%): ";
    cin>>operation;
    if(operation == "+")
    {
        double sum = 0;
        sum = num_1 + num_2;
        cout<<"Sum of "<<num_1<<" and "<<num_2<<" is "<<sum;
    }
    else if(operation == "-")
    {
        double diff;
        diff = num_1 - num_2;
        cout<<"Difference of "<<num_1<<" and "<<num_2<<" is "<<diff;
    }
    else if(operation == "*")
    {
        double Mul;
        Mul = num_1 * num_2;
        cout<<"Multiplication of "<<num_1<<" and "<<num_2<<" is "<<Mul;
    }
    else if(operation == "/")
    {
        double div;
        div = num_1 / num_2;
        cout<<"Division of "<<num_1<<" and "<<num_2<<" is "<<div;
    }
    else if(operation == "%")
    {
        int modulus;
        modulus = num_1 % num_2;
        cout<<"Modulus of "<<num_1<<" by "<<num_2<<" is "<<modulus;
    }
    else
    {
        cout<<"You have entered a wrong operation!!!";
    }
    return 0;
}