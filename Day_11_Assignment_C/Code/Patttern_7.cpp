/*                      row   star    space       star
    * * * * *                             
    *       *           2     1        3           1
    *       *           3     1        3           1
    *       *           4     n-(n-1)  (n-2)       n-(n-1)
    * * * * *                              
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int row, col;
    for(row=1; row<=n; row++)// 1 2 3 4 5
    {
        if(row==1 || row==n)
        {
            //for star
            for(col=1; col<=n; col++)
            {
                cout<<"* ";
            }
        }

        else
        {
            //for star
            for(col=1; col<=n-(n-1); col++)//1
            {
                cout<<"* ";
            }
            //for space
            for(col=1; col<=n-2; col++)//1 2 3 spaces
            {
                cout<<"  ";
            }
            //for star
            for(col=1; col<=n-(n-1); col++)//1
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}