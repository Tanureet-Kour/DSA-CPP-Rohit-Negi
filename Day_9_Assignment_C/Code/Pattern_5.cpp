/*                row      print
    a             1        a+row-1
    b b           2        a+row-1
    c c c         3        c c c
    d d d d       4        d d d d
    e e e e e     5        e e e e e (row)
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int row, col; 
    char ch = 'a';

    for(row=1; row<=n; row++)
    {
        for(col=1;  col<=row; col++)
        {
            cout<<char('a'+row-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}