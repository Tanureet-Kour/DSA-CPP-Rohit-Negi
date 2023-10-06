// There is an Arithmetic Progression, First Number is 220 and common difference is 7. So print all the numbers from 220 to 730 which follow the AP
#include<iostream>
using namespace std;

int main()
{
    int i, a=220, d=7, n=(730-a)+1;
    for(int i=1; i<=n; i++)
    {
        int value= (a+(i-1)*d);
        if(value>730)
        {
            break;
        }
        cout<<value<<endl;
    }
    return 0;
}