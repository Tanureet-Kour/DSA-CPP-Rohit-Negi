//Write a program to convert decimal numbers to octal numbers.
#include<iostream>
using namespace std;

int dec2oct(int num_d)
{
    int rem, num_o=0, mul=1;
    while(num_d>0)
    {
        rem   = num_d%8;
        num_d = num_d/8;
        num_o = rem*mul+num_o;
        mul   = mul*10;
    }

    return num_o;
}

int main()
{
    int value;
    cout<<"Enter the decimal value: ";
    cin>>value;
    cout<<"Decimal Value: "<<value<<endl;

    cout<<"  Octal Value: "<<dec2oct(value);

    return 0;
}