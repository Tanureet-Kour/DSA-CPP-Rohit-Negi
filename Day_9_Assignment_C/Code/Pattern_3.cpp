/*                     row      print
    1                  1        1
    2 2                2        2 2
    3 3 3              3        3 3 3
    4 4 4 4            4        4 4 4 4
    5 5 5 5 5          5        row row row row row
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
        for(col=1; col<=row; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}