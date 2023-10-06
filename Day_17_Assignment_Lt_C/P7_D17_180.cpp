// Function to find the complement of a given number
#include <iostream>
#include<limits.h>
using namespace std;

int dec2cbin(int num_d)//10
{
    int rem, num_b=0, mul = 1;
    while (num_d)
    {
        rem = num_d % 2;
        if (rem == 1)
            rem = 0;
        else
            rem = 1;
        num_d = num_d / 2;
        num_b = rem * mul + num_b;
        mul = mul * 10;
    }
    return num_b;
}
int bin2dec(int num_b) // 1101
{
    int rem, num_d=0, mul = 1;
    while (num_b)
    {
        rem = num_b % 10;
        num_b = num_b / 10;
        num_d = rem * mul + num_d;
        mul = mul * 2;
    }
    return num_d;
}
int bitwiseComplement(int n)
{
    int bin_value = dec2cbin(n);     // 1010  = 0101
    int result = bin2dec(bin_value); // 0101  = 5

    return result;
}

int main()
{
    int value;
    cout<<"Enter value for value: ";
    cin>>value;
    cout<<"Decimal Value: "<<value<<endl;
    cout<<"Complement Decimal Value: "<<bitwiseComplement(value)<<endl;

    return 0;
}
