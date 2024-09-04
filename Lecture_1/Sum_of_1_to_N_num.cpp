#include<iostream>
using namespace std;
//This program will sum the numbers from 1 to a number that is entered by the user and print the result
int main()
{
    int N,Sum=0,i=1;
    cout<<"Sum of Numbers from 1 to N"<<endl;
    cout<<"Enter the End Number: ";
    cin>>N;
    while (i<=N)
    {
        Sum += i;
        i +=1;
    }

    cout<<"Sum of Numbers from 1 to "<<N<<" is "<<Sum<<endl;

    return 0;
}