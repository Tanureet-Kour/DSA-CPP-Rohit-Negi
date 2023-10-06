/*                                row        star      space     star
    *           *                 1          1         3         1  
    * *       * *                 2          2         2         2
    * * *   * * *                 3          3         1         3
    * * * * * * *                 4          row       2(n-row)  0
    
    * * *   * * *                 3          row       2(n-row)  row
    * *       * *                 2          2         2         2
    *           *                 1          1         3         1
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int row, col;

    //First Part
    for(row=1; row<=n; row++)//2
    {
        //for star
        for(col=1; col<=row; col++)//1 2
        {
            cout<<"* ";
        }
        //for space
        for(col=1; col<=2*(n-row); col++)//
        {
            cout<<"  ";
        }
        //for star
        for(col=1; col<=row; col++)//1 2
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    //Second Part
    for(row=n-1; row>=1; row--)//3 2 1
    {
        //for star
        for(col=1; col<=row; col++)//1 2 3
        {
            cout<<"* ";
        }
        //for space
        for(col=1; col<=2*(n-row); col++)//1 
        {
            cout<<"  ";
        }
        //for star
        for(col=1; col<=row; col++)//1 2 3
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}