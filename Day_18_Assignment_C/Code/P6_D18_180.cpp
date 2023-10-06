//Given two numbers n , r.Find nCr(Combination). Use function here
#include<iostream>
using namespace std;

int factorial(int n)
{
    int product = 1;
    for(int i=1; i<=n; i++)
    {
        product*=i;
    }
    return product;
}

int combination_nCr(int n, int r)
{
    int a,b,c,result;
    a= factorial(n);
    b= factorial(r);
    c= factorial(n-r);

    result= a/(b*c);

    return result;
}
int main()
{
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;

    cout<<"Combination: "<<combination_nCr(n,r);
    return 0;
}
