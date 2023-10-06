//Swap two numbers a,b without using extra variab;e
#include<iostream>
using namespace std;

void swapValue(int &x, int &y)
{
    x = x+y;
    y = x-y;
    x = x-y;
}

int main()
{
    int a,b;
    cout<<"Enter the values: ";
    cin>>a>>b;
    cout<<"Original Values: "<<a<<" "<<b<<endl;
    swapValue(a,b);
    cout<<" Swapped Values: "<<a<<" "<<b;

    return 0;
}


