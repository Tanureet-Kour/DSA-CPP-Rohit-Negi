/*                           row      space     number
           1                 1        (n-row)   1            0 to 1  1 no
         1 2 1               2        3         1 to 2       1 to 1  3 no
       1 2 3 2 1             3        2         1 to 3       2 to 1  5 no
      1 2 3 4 3 2 1          4        1         1 to 4       3 to 1  7 no
    1 2 3 4 5 4 3 2 1        5        0         1 to row row-1 to 1  9 no
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    int row,col;
    for(row=1; row<=n; row++)//2
    {
        //for spaces
        for(col=1; col<=n-row; col++)//1 2 3 spaces
        {
            cout<<"  ";
        }
        //for numbers ascending
        for(col=1; col<=row; col++)// 1 2
        {
            cout<<col<<" ";
        }
        //for numbers descending
        for(col=row-1; col>=1; col--)// 1
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}
