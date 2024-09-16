#include<iostream>
using namespace std;
// This Program will print the following pattern

// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

int main(){
    int n=4;

    //1st Side
    for(int i=0; i<n; i++){
        //Stars
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        //Space
        if(i!=n-1){
        for (int j = 0 ; j<(n-i-1)*2; j++)
        {
            cout<<" ";
        }
        }
        //Stars
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++){
        //Stars
        for(int j=0; j<n-i; j++){
            cout<<"*";
            
        }

        //Space
        if(i!=n-4){
            for (int j = 0 ; j<(2*i); j++)
            {
                cout<<" ";
            }
        }  

        //Stars
        for(int j=0; j<n-i; j++){
            cout<<"*";
            
        }      
        cout<<endl;
    }
   



return 0;
}