/*
    * * * * 
    * * * *
    * * * *
    * * * *
*/
#include<iostream>
using namespace std;

int main()
{
    int r_no, c_no, row, col;

    cout<<"Enter the number of rows: ";
    cin>>r_no;
    cout<<"Enter the number of cols: ";
    cin>>c_no;

    for(row=1; row<=r_no; row++)
    {
        for(col=1; col<=c_no; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}