#include<iostream>
using namespace std;
// This Program will print the following pattern
// A
// B C 
// D E F
// G H I J

int main(){
    int n = 4;
    char chr = 'A';

    for(int i = 0; i<n; i++){
        for (int j = 0; j < i+1; j++)
        {
            cout<<chr<<" ";
            chr++;
        }
        cout<<endl;
    }



return 0;
}