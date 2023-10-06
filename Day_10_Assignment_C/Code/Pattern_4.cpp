/*                  row      space    print
            A       1        4        0 A
          A B       2        3        1 A to B
        A B C       3        2        2 A to C
      A B C D       4        1        3 A to D
    A B C D E       5        n-row    4 A to (A+row-1)
*/
#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the value for n: ";
  cin>>n;

  int row;
  char ch='A', col;

  for(row=1; row<=n; row++)
  {
    //for spaces
    for(col=1; col<=n-row; col++)
    {
      cout<<"  ";
    }
    //for characters
    for(col='A'; col<='A'+row-1; col++)
    {
      cout<<col<<" ";
    }
    cout<<endl;
  }
  return 0;
}
