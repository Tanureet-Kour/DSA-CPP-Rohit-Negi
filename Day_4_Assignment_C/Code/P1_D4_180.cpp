//Two numbers are given, print the bigger number, it is given that both numbers can't be the same
#include<iostream>
using namespace std;

int main()
{
    int num1,num2;

    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    if(num1==num2)
    {
        cout<<"Both the numbers input can't be same"<<endl;
    } 
    else
    {
        if(num1>num2)
        {
            cout<<"First number "<<num1<<" is greatest";
        }
        else
        {
            cout<<"Second Number "<<num2<<" is greatest";
        }
    }
    return 0;
}