/*                  row      print       range
    5               5        1           n to row
    5 4             4        2           n to row
    5 4 3           3        3           n to row
    5 4 3 2         2        4           n to row
    5 4 3 2 1       1        row times   n to row
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int row, col;
    for(row=n; row>=1; row--)//5 4 3 2 1
    {
        for(col=n; col>=row; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}