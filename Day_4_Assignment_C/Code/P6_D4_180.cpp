//Print all odd numbers from 1 to n, take n as an input from the user
#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<" Enter the value for n: ";
    cin>>n;

    cout<<"sAll Odd Numbers Are from 1 to "<<n<<" are: "<<endl;
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            cout<<i<<" ";
        }
        else
        {
            continue;
        }
    }
    return 0;
}