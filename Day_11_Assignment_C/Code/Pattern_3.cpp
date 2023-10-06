/*                      row    spaces   star
    * * * * * * *       4      0        7
      * * * * *         3      1        5
        * * *           2      2        3
          *             1      (n-row)  (2*row-1)
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int row,col;
    for(row=n; row>=1; row--)//4
    {
        //for spaces
        for(col=1; col<=n-row; col++)//0
        {
            cout<<"  ";
        }
        //for star
        for(col=1; col<=2*row-1; col++)//1 2 3 4 5 6 7
        {
            cout<<"* ";
        }
         cout<<endl;
    }
    return 0;
}