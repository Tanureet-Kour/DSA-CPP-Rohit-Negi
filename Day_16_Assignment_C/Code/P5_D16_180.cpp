//Write a program to convert binary to octal numbers
#include<iostream>
using namespace std;

int bin2dec(int num_b)//1 1 0 1
{
    int num_d = 0, mul=1, rem;
    while(num_b>0)
    {
        rem   = num_b%10;      //rem = 1 0 1 1
        num_b = num_b/10;      //num_b = 110  11 1 0
        num_d = rem*mul+num_d; //num_d = 1+0+4+8 = 13
        mul   = mul*2;
    }
    // cout<<num_d;
    return num_d;
}
int dec2oct(int num_d)
{
    int rem, num_o=0, mul=1;
    while(num_d>0)
    {
        rem = num_d%8;
        num_d = num_d/8;
        num_o = rem*mul+num_o;
        mul = mul*10;
    }

    return num_o;
}

int main()
{
    int value;
    cout<<"Enter the binary value: ";
    cin>>value;
    cout<<"Binary Value: "<<value<<endl;

    int result = bin2dec(value);
    int output = dec2oct(result);

    cout<<" Octal Value: "<<output;
    return 0;
}