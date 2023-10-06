/*
    10 10 10 10 
    10 10 10 10
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

    for(row=1; row<=r_no; row++)
    {
        for(col=1; col<=c_no; col++)
        {
            cout<<"10 ";
        }
        cout<<endl;
    }
    return 0;
}