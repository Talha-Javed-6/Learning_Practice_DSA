#include<iostream>
using namespace std;
// This Program will Print the following pattern
// A B C
// D E F
// G H I
int main(){
    int n = 3;
    char chr = 'A';

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout<<chr<<" ";
            chr++;
        }
        cout<<endl;
    }
    cout<<"Character After Pattern: "<<chr;

    return 0;
}