/*                         row     space      star
       *                   1       3          1
      * *                  2       2          2
     * * *                 3       1          3
    * * * *                4       (n-row)    row


                           row     space      star
    * * * *                4       0          4
     * * *                 3       1          3
      * *                  2       2          2
       *                   1       (n-row)    row
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    int row, col;

    //for ascending
    for(row=1; row<=n; row++)//1
    {
        // for spaces
        for(col=1; col<=n-row; col++)//1 2 3
        {
            cout<<" ";
        }
        // for stars
        for(col=1; col<=row; col++)//1
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    //for descending
    for(row=n; row>=1; row--)//4
    {
        // for spaces
        for(col=1; col<=n-row; col++)//0
        {
            cout<<" ";
        }
        // for stars
        for(col= 1; col<=row; col++)//1 2 3 4
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
