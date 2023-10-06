// Find the factorial of a number n using a while and do while loop separately.
#include<iostream>
using namespace std;

int main()
{
    // //Using While Loop
    // int n;
    // cout<<"Enter the value for n: ";
    // cin>>n;

    // int i=1, fact=1;
    // while(i<=n)//1 2 3 4
    // {
    //     fact*=i;
    //     i++;
    // }
    // cout<<"Factorial of "<<n<<" is: "<<fact;

    //Using Do While Loop
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int i=1, fact=1;
    do
    {
        fact*=i;
        i++;
    }while(i<=n);

    cout<<"Factorial of "<<n<<" is: "<<fact;
    return 0;
}