#include<iostream>
using namespace std;
//This program will check the no is prime or not by using a Function
void isNoPrime(int num){
   
    int i = 2;
    while (i<=(num-1))
    {
        if (num%i == 0)
        {
            cout<<num<<"Number is not Prime!!!";
            break;
           
        }
        else {
            i +=1;
        }
         cout<<num<<" is  a Prime Number."<<endl;       
    }
     
    
}
int main(){
    int num;
    cout<<"------Check Number is Prime or Not------"<<endl;
    cout<<"Enter Any Number: ";
    cin>>num;
    
    isNoPrime(num);
    return 0;
}
