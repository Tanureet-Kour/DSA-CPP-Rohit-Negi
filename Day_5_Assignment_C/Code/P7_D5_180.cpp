//Print nth Fibonacci number
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int a=0, b=1, sum=0;
    for(int i=1; i<=n-2; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<"nth Term: "<<sum;
    return 0;
}