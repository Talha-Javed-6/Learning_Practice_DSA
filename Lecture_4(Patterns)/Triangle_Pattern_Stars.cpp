#include<iostream>
using namespace std;
// This program will print the following pattern of stars
// *
// * *
// * * *
// * * * *
int main(){
    int n = 6;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
     
     return 0;
}