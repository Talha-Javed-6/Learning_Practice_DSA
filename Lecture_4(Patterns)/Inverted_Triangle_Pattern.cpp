#include<iostream>
using namespace std;
// This Program will print the following pattern
// 1 1 1 1
//   2 2 2 
//     3 3
//       4

int main(){
    int n = 4;

    for(int i = 0; i<n; i++){
        for (int j = 0 ; j < i; j++)
        {
            cout<<" ";
        }
        for(int k = 0; k<n-i;k++){
            cout<<i+1;
        }
        cout<<endl;
    }



return 0;
}