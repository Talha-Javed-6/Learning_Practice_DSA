#include<iostream>
using namespace std;
//This Program will sum the numbers from 1 to N which are divisible by 3 and print the Result
int main()
{
    int i = 1;
    int N;
    int sum = 0;
    cout<<"------Sum of Numbers divisible by 3------"<<endl;
    cout<<"Enter a Number: ";
    cin>>N;
    while (i<=N)
    {
        if (i%3==0)
        {
            sum +=i;
        }
            i++;
        
        
    }
    cout<<"Sum of Numbers(Divisble by 3) from 1"<<" to "<<N<<" is "<<sum<<endl;
    
    return 0;
}