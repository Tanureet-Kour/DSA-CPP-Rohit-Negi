/*
          1 
        1 2
      1 2 3
    1 2 3 4
*/
/*  row      space    print
    1        4        1
    2        3        1 to 2
    3        2        1 to 3
    4        (n-row)  (1 to row)      
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
    for(col=1; col<=row; col++)
    {
      cout<<col<<" ";
    }
    cout<<endl;
  }
  return 0;
}
