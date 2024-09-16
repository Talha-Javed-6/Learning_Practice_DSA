#include<iostream>
using namespace std;
// This program will print the following pattern of Numbers
// 1
// 2 2
// 3 3 3
// 4 4 4 4
int main(){
    int n = 4;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;

    // 1
    // 1 2 
    // 1 2 3
    // 1 2 3 4
    

    for(int i = 0; i<n; i++){
        for(int j = 1; j<=i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;

}