/*                  row     print
    1 2 3 4 5       5       1 to row
    1 2 3 4         4       1 to row
    1 2 3           3
    1 2             2
    1               1
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int row, col;
    for(row=n; row>=1; row--)//4
    {
        for(col=1; col<=row; col++)// 1 2 3 4 
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}