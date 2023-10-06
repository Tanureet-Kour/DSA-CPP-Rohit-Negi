//Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (Use continue keyword here)
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int i;
    for(i=1; i<=n; i++)
    {
        if(i%3!=0 && i%5!=0)
        {
            cout<<i<<" ";
        }
        else
        {
            continue;
        }
    }
    return 0;
}