//Print 6*3 in output, don't print 18, just 6*3 should be in the output screen
#include<iostream>
using namespace std;

int main()
{
    int num1,num2;

    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    cout<<num1<<" * "<<num2<<" = ";
    cout<<" Resultant: "<<num1*num2;
    return 0;
}