/*                   row      print
    * * * * *        1        5
    * * * *          2        4
    * * *            3        3
    * *              4        2
    *                5        1  
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int row,col;
    for(row=n; row>=1; row--)//5 4 3 2 1
    {
        for(col=1; col<=row; col++)//1 2 3 4 5
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
