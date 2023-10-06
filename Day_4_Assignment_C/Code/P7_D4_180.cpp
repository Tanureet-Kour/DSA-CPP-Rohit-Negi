//Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.
#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the value for n: ";
    cin>>n;

    cout<<"All the numbers divisible by 4 in the range of 1 to n are listed below: "<<endl;

    for(i=1; i<=n; i++)
    {
        if(i%4==0)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}