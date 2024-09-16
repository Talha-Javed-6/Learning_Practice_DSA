#include<iostream>
using namespace std;
//This program will calculate the factorial of N numbers where N is entered by the user
int main()
{
    int N,Fact=1,i=1;
    cout<<"------Factorial of a Number------"<<endl;
    cout<<"Enter a N umber to Calculate its Factorial: ";
    cin>>N;
    while (i<=N)
    {
        Fact *= i;
        i += 1;
    }
    cout<<"The factorial of "<<N<<"! is "<<Fact;
    return 0;
} 