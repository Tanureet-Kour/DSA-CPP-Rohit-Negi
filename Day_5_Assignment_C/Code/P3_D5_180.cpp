// Print char 'Z' to 'A' with the help of a for loop
#include<iostream>
using namespace std;

int main()
{
    char ch='Z';
    int i;

    for(i=26; i>0; i--)
    {
        cout<<char(i)<<endl;
    }
    return 0;
}