// Print char from 'A' to 'Z' with the help of for loop
#include<iostream>
using namespace std;
int main()
{
    char alpha = 'A';
    int i=1;
    for(int i=0; i<26; i++)
    {
        cout<<char(alpha+i)<<endl;
    }
    
    return 0;
} 