//Write a program to convert decimal numbers to binary numbers using a for loop
#include<iostream>
using namespace std;

int dec2bin(int num_d)
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
    cout<<"Enter the decimal value: ";
    cin>>value;
    cout<<"Decimal Value: "<<value<<endl;

    cout<<" Binary Value: "<<dec2bin(value);
    return 0;
}
