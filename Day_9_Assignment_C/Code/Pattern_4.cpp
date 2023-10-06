/*                    row      print
    1                 1        1
    2 1               2        2 1
    3 2 1             3        3 2 1
    4 3 2 1           4        4 3 2 1 
    5 4 3 2 1         5        row to 1
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int row, col;

    for(row=1; row<=n; row++)
    {
        for(col=row; col>=1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}