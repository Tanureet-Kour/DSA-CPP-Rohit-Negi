//Function to reverse the integer input by the user
#include<iostream>
using namespace std;

int revInt(int num)
{
    int rem, rev=0;
    while(num)
    {
        rem = num % 10;
        num = num / 10;
        rev = rev*10+rem;
    }
    return rev;
}

int main()
{
    int value;
    cout<<" Enter the value: ";
    cin>>value;
    cout<<"Reverse of value: "<<revInt(value)<<endl;

    return 0;
}