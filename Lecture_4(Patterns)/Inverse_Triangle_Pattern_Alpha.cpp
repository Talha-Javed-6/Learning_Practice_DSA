#include<iostream>
using namespace std;
// This Program will print the following pattern
// A A A A
//   B B B 
//     C C
//       D

int main(){
    int n = 4;
    char chr = 'A';

    for(int i = 0; i<n; i++){
        for (int j = 0 ; j < i; j++)
        {
            cout<<" ";
        }
        for(int k = 0; k<n-i;k++){
            cout<<chr;
        }
        cout<<endl;
        chr ++;
    }



return 0;
}