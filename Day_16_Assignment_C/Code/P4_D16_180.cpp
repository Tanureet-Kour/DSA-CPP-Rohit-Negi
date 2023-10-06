//Write a program to convert octal numbers to decimal numbers.
#include<iostream>
using namespace std;

int oct2dec(int num_o)
{
    int rem, num_d=0, mul=1;
    while(num_o>0)
    {
        rem   = num_o%10;
        num_o = num_o/10;
        num_d = rem*mul+num_d;
        mul   = mul*8;
    }

    return num_d;
}

int main()
{
    int value;
    cout<<"Enter the octal value: ";
    cin>>value;
    cout<<"  Octal Value: "<<value<<endl;

    cout<<"Decimal Value: "<<oct2dec(value);
    return 0;
}