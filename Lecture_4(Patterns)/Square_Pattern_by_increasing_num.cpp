#include<iostream>
using namespace std;
// This Program will Print the following pattern
// 1 2 3
// 4 5 6
// 7 8 9
int main(){
    int n = 3;
    int num = 1;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    cout<<"Number After Pattern: "<<num;

    return 0;
}