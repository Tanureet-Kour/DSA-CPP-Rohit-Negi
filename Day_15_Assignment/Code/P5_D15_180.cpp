// Print all the Capital and small letters using a while loop. it means A-Z following a-z.
#include<iostream>
using namespace std;

int main()
{
    char i='A';
    while(i<='Z')
    {
        cout<<i<<endl;
        i++;
    }
    char j='a';
    while(j<='z')
    {
        cout<<j<<endl;
        j++;
    }
    return 0;
}