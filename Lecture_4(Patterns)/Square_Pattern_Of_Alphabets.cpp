#include<iostream>
using namespace std;
//This Program will Print a Square Pattern of Alphabets by Moving to Next
// A B C D
// A B C D
// A B C D
// A B C D

int main() {

    int n=3;
    char chr = 'A';

    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<chr<<" ";
            chr ++;
        }
        cout<<endl;
    }

    cout<<"Character After Pattern: "<<chr;


    return 0;
}