#include<iostream>
using namespace std;
//This Program will Print a Square Pattern of integers like below
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4


int main() {

    int n=4; //How many rows
    

    for(int i=1; i<=n; i++){ //Control No of rows
        for(int j = 1; j<=n; j++){ //Decide what to print in each rows
            cout<<j<<" ";
            
        }
        cout<<endl;
    }

    


    return 0;
}