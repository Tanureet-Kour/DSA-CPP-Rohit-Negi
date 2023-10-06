// What will be the result below according to the precedence table.
#include<iostream>
using namespace std;

int main()
{
    int res1, res2, res3, res4;

    res1= 2*3-48==5/4*6;   
    res2= 6<<2-4*8/2;      
    res3= 5>4<3/2-8%4+5;   
    res4= 14-8+92>>2+70;   

    cout<<res1<<endl;
    cout<<res2<<endl;
    cout<<res3<<endl;
    cout<<res4<<endl;

    return 0;
}