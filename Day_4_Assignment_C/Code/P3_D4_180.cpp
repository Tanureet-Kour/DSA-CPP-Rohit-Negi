// Take a number in input (ex n) and print the correponding month to it. Ex: fro n=1, print January, n=2, print February like this you need to give output. It is given that n will be greater than 0 and less than 13.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " Enter value of n: ";
    cin >> n;

    if (n > 0 && n < 13)
    {
        switch (n)
        {
        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "February" << endl;
            break;
        case 3:
            cout << "March" << endl;
            break;
        case 4:
            cout << "April" << endl;
            break;
        case 5:
            cout << "May" << endl;
            break;
        case 6:
            cout << "June" << endl;
            break;
        case 7:
            cout << "July" << endl;
            break;
        case 8:
            cout << "August" << endl;
            break;
        case 9:
            cout << "September" << endl;
            break;
        case 10:
            cout << "October" << endl;
            break;
        case 11:
            cout << "November" << endl;
            break;
        case 12:
            cout << "December" << endl;
            break;
        }
    }
    else
    {
        cout<<"Enter valid integer between 1-12 only";
    }
    return 0;
}