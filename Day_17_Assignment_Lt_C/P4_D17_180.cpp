// Function to check whether the input number is a power of two

// Method-1(Bruteforce)
//  #include<iostream>
//  using namespace std;

// int checkPowerOf2(int value)
// {
//     for(int i=2; i<=value; i*=2)
//     {
//         if(value==i)
//             return 1;
//     }
//     return 0;
// }

// int main()
// {
//     int value;
//     cout<<"Enter the value: ";
//     cin>>value;
//     cout<<"Is it Power of two? : "<<checkPowerOf2(value)<<endl;

//     return 0;
// }

// Method-2 (Mod Operation)
#include <iostream>
using namespace std;

int checkPowerOf2(int num) //64
{
    if(num<0)
        return 0; 
   
    while (num!=1) //56
    {
        if(num%2==1)
            return 0;

        num = num/2;
    }
    return 1;
}

int main()
{
    int value;
    cout << "Enter the value: ";
    cin >> value;
    cout << "Is it Power of two? : " << checkPowerOf2(value) << endl;

    return 0;
}
