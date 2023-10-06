/*
    1 1 1 1       col=row
    2 2 2 2
    3 3 3 3
    4 4 4 4
*/
#include<iostream>
using namespace std;

int main()
{
    int r_no, c_no;
    cout<<"Enter the value for rows: ";
    cin>>r_no;
    cout<<"Enter the value for cols: ";
    cin>>c_no;

    int row,col;
    for(row=1; row<=r_no; row++)// 1 
    {
        for(col=1; col<=c_no; col++)// 1 2 3 4
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}