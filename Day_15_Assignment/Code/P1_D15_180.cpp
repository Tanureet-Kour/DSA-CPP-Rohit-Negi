// Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.
#include<iostream>
using namespace std;

// //While Loop
// int main()
// {
//     int n;
//     cout<<"Enter the value for n: ";
//     cin>>n;

//     int i=1;
//     while(i<=n)
//     {
//         if(i%2==0)
//         {
//             cout<<i<<endl;
//             i++;
//         }
//         i++;
//     }
//     return 0;
// }

//Do While Loop
int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int i=1;
    do
    {
        if(i%2==0)
        {
            cout<<i<<" ";
            i++;
        }
        i++;
    }while(i<=n);
    
    return 0;
}