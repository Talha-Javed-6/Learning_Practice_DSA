#include<iostream>
using namespace std;
// This program will print the following pattern of Alphabets
// A
// B B
// C C C
// D D D D
int main(){
    int n = 4;
    char alpha = 'A';

    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cout<<alpha<<" ";
        }
        alpha += 1;
        cout<<endl;
    }

    return 0;
    
}