//Write a program to convert octal numbers to binary numbers
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
int dec2bin(int num_d)//13
{
    int num_b = 0, mul=1, rem;
    while(num_d>0)
    {
        rem   = num_d%2;     
        num_d = num_d/2;      
        num_b = rem*mul+num_b; 
        mul   = mul*10;
    }
    return num_b;
}
int main()
{
    int value;
    cout<<"Enter the octal value: ";
    cin>>value;
    cout<<" Octal Value: "<<value<<endl;

    int result = oct2dec(value);
    int output = dec2bin(result);

    cout<<"Binary Value: "<<output;
    return 0;
}