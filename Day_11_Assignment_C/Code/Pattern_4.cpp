/*                           row      star   space      star  
    * * * * * * * *          4        4      0          4
    * * *     * * *          3        3      2          3
    * *         * *          2        2      4          2
    *             *          1        row    2(n-row)   row    
    

    *             *
    * *         * *
    * * *     * * *
    * * * * * * * *
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
    for(row=n; row>=1; row--)//4
    {
        //for star
        for(col=1; col<=row; col++)//1 2 3 4
        {
            cout<<"* ";
        }
        //for space
        for(col=1; col<=2*(n-row); col++)//0
        {
            cout<<"  ";
        }
        //for star
        for(col=1; col<=row; col++)//1 2 3 4
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    //Second Part
    for(row=1; row<=n; row++)//1
    {
        //for star
        for(col=1; col<=row; col++)//1
        {
            cout<<"* ";
        }
        //for space
        for(col=1; col<=2*(n-row); col++)//1 2 3 4 5 6
        {
            cout<<"  ";
        }
        //for star
        for(col=1; col<=row; col++)//1
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}