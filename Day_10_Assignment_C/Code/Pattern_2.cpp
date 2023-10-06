/*                       row       space        print
          1              1         4            1
        2 2              2         3            2
      3 3 3              3         2            3
    4 4 4 4              4         1            4
  5 5 5 5 5              5         (n-row)      row
*/
#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the value for n: ";
  cin>>n;

  int row, col;
  for(row=1; row<=n; row++)//1
  {
    //for spaces
    for(col=1; col<=n-row; col++)//1 2 3 4
    {
        cout<<"  ";
    }
    //for numbers
    for(col=1; col<=row; col++)//1
    {
      cout<<row<<" ";
    }
    cout<<endl;
  }
  return 0;
}