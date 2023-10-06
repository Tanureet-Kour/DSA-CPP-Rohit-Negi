/*                         row     print
    1                       1      1
    1 2                     2      1 to 2
    1 2 3                   3      1 to 3
    1 2 3 4                 4      1 to 4
    1 2 3 4 5               5      1 to row
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
        for(col=1; col<=row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}