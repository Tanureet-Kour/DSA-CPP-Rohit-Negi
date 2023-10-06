//Print "Hello Coder Army" n times using function
#include<iostream>
using namespace std;

void printString(int num)
{
    for(int i=1; i<=num; i++)
    {
        cout<<i<<". : "<<"Hello Coder Army"<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    printString(n);

    return 0;
}