/*
          1
        2 1
      3 2 1
    4 3 2 1

    row      space    print
    1        4        1
    2        3        2 to 1
    3        2        3 to 1
    4        (n-row)  (row to 1)  
*/
#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the value for n: ";
  cin>>n;

  int row, col;

  for(row=1; row<=n; row++)
  {
    //for spaces
    for(col=1; col<=n-row; col++)
    {
      cout<<"  ";
    }
    //for characters
    for(col=row; col>=1; col--)
    {
      cout<<col<<" ";
    }
    cout<<endl;
  }
  return 0;
}
