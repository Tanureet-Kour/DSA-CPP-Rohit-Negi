/*                                   row     spaces   star
            *                        1       (n-row)  (2*row-1)
          * * *                      2       3        3
        * * * * *                    3       2        5
      * * * * * * *                  4       1        7
    * * * * * * * * *                5       0        9
*/
#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the value for n: ";
  cin>>n;

  int row,col;
  for(row=1; row<=n; row++)//2
  {
    //for spaces
    for(col=1; col<=n-row; col++)//1 2 3 
    {
      cout<<"  ";
    }
    //for stars
    for(col=1; col<=2*row-1; col++)//1 2 3
    {
      cout<<"* ";
    }
    cout<<endl;
  }
  return 0;
}
