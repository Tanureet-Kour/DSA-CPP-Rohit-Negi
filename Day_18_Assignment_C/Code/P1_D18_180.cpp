//Find the cube of anumber using Function
#include<iostream>
using namespace std;

int findCube(int num)
{
    return num*num*num;
}

int main()
{
    int value;
    cout<<"Enter the value: ";
    cin>>value;
    cout<<"Cube of "<<value<<" is: "<<findCube(value);

    return 0;
}