//Function to find the square root of a given integer in the integer format only.
#include<iostream>
using namespace std;

int sqrtInt(int num)
{
    for(int i=1; i<=num; i++)
    // cout<<i<<" ";
    {
        int imd = i*i ;
        if(num==(imd))
        {
            return i;
        }

        else if(imd > num)
        {
            return i-1;
        }
    }
}

int main()
{
    int value;
    cout<<"Enter the value: ";
    cin>>value;
    cout<<"Square root value: "<<sqrtInt(value)<<endl; 
    
    return 0;
}