#include<iostream>
using namespace std;
// This Program will print the following pattern
//   1
//  121 
// 12321
//1234321

int main(){
    int n = 10;
    

    for(int i = 0; i<n; i++){
        //Print Space
        for (int j = 0 ; j <n-i-1; j++)
        {
            cout<<" ";
        }

        //Print 1st set of Number
        for(int k = 1; k<=i+1 ;k++){
            cout<<k;
        }

        
        //Print 2nd set of Number
        for(int l = i; l>=1; l-- ){
            cout<<l;
        }
        cout<<endl;
        
    }



return 0;
}