/*                       row       space     *
        *                1         4         1
      * *                2         3         2
    * * *                3         2         3
  * * * *                4         1         4
* * * * *                5         n-row     row
*/
#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the value for n: ";
  cin>>n;

  int row, col;
  for(row=1; row<=n; row++)//2
  {
    //print spaces
    for(col=1; col<=n-row; col++)//1 2 3 
    {
      cout<<"  ";
    }
    //for stars
    for(col=1; col<=row; col++)//1 2
    {
      cout<<"* ";
    }
    cout<<endl;
  }
  return 0;
}