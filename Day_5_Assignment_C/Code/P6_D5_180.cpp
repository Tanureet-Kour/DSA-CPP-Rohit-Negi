// Print sum of cube of first n natural number
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum = sum + (i*i*i);
    }
    cout<<sum;
    return 0;
}