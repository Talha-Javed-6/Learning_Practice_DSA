#include<iostream>
#include<cmath>
using namespace std;
//This program will print the prime no from 1 to N by using a Function
void printPrimeNumbers(int n){
    for(int num = 2; num<=n; num++){ 
        bool isPrime = true;

        for (int i = 2; i <= sqrt(num); i++) { 
            if (num % i == 0) { 
                
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " ";
        }
    }

}
int main(){
    int num;
    cout<<"------Print Prime Numbers from 1 To N------"<<endl;
    cout<<"Enter End Number: ";
    cin>>num;
    
    printPrimeNumbers(num);
    
    return 0;
}
