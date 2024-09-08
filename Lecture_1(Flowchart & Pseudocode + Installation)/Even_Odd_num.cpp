#include<iostream>
using namespace std;
//This Program will check the number is it Even or Odd  from the number entered by the user and print the Identified Catagory of number
int main()
{
    int a;
    cout<<"Number is Even or Odd"<<endl;
    cout<<"Enter Any Number: ";
    cin>>a;
    if(a%2 == 0){
        cout<<"The Number You Entered is Even!!!";
    }
    else{
        cout<<"The Number You Entered is Odd!!!";
    }
    

    return 0;
}