// Give a number n, find if it is prime or not, use a while loop and break here to solve it.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    int i = 2;
    while (i <= n) // 2 3 4 5
    {
        if (n == 0 || n == 1)
        {
            cout << "Not a Prime number" << endl;
            break;
        }
        else if (n < 0)
        {
            cout << "Not a Prime number" << endl;
            break;
        }
        else if (n == 2)
        {
            cout << n << " : Prime Number";
            break;
        }

        else if (n % i == 0)
        {
            cout << "Not a Prime Number" << endl;
            cout << "The first factor found is: " << i << endl;
            break;
        }
        i++;
        cout << n << " : Prime Number";
    }
    return 0;
}