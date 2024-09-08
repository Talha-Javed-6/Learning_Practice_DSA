#include<iostream>
using namespace std;
//This program will Check the number is prime or not when a number entered by the user and print the result
int main()
{
    int N,i=2;
    cout<<"Nummber is Prime or Not"<<endl;
    cout<<"Enter Any Number: ";
    cin>>N;
    while (i<=(N-1))
    {
        if (N%i == 0)
        {
            cout<<"Number is not Prime!!!";
            return 0;
        }
        else {
            i +=1;
        }
                
    }


    cout<<"Number is Prime"<<endl;

    return 0;
}