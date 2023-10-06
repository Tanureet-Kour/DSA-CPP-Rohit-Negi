/*                            row    space      star    space
          *                   1      2(n-row) 1       4 2(n-row)
        *   *                 2      1          2       2
      *       *   
      *             3      0          2       0
                   
        *   *                 2      2          2       2
          *                   1      4          1       4
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter value for n: ";
    cin>>n;

    int row, col;

    //First Part
    for(row=1; row<=n; row++)//2 3 4
    {
        if(row==1)
        {
            //for space
            for(col=1; col<=2*(n-row); col++)//1 2 3 4 5 6 spaces  
            {
                cout<<" ";
            }
            //for stars
            for(col=1; col<=1; col++)//1 star
            {
                cout<<"* ";
            }
            //for space
            for(col=1; col<=2*(n-row); col++)//1 2 3 4 5 6
            {
                cout<<" ";
            }
            cout<<endl;
        }
        else
        {
            //for space
            for(col=1; col<=2*(n-row); row++)//1 2 3 4 spaces
            {
                cout<<" ";
            }
            //for stars
            for(col=1; col<=2; col++)//1 2 stars
            {
                cout<<"* ";
            }
            //for space
            for(col=1; col<=2*(n-row); col++)//1 2 3 4 sapces
            {
                cout<<" ";
            }
            cout<<endl;
        }
    }

    // //Second Part
    // for(row=1; row<=n; row++)//1 2 3 4
    // {
    //     if(row==1)
    //     {
    //         //for space
    //         for(col=1; col<=2*(n-row); col++)
    //         {
    //             cout<<"  ";
    //         }
    //         //for stars
    //         for(col=1; col<=1; col++)
    //         {
    //             cout<<"* ";
    //         }
    //         //for space
    //         for(col=1; col<=2*(n-row); col++)
    //         {
    //             cout<<"  ";
    //         }
    //         cout<<endl;
    //     }
    //     else
    //     {
    //         //for space
    //         for(col=1; col<=2*(n-row); row++)
    //         {
    //             cout<<"  ";
    //         }
    //         //for stars
    //         for(col=1; col<=2; col++)
    //         {
    //             cout<<"* ";
    //         }
    //         //for space
    //         for(col=1; col<=2*(n-row); col++)
    //         {
    //             cout<<"  ";
    //         }
    //         cout<<endl;
    //     }
    // }
}

