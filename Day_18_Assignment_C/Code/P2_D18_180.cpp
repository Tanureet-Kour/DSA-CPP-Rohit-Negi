// Reverse a number n using function(5000<=n<=5000)
#include <iostream>
using namespace std;

int revInt(int num)
{
    int rem, rev = 0;
    while (num)
    {
        rem = num % 10;
        num = num / 10;
        rev = rev * 10 + rem;
    }

    return rev;
}

int main()
{
    int value;
    cout << "Enter the value: ";
    cin >> value;
    cout << "Original: " << value << endl;
    cout << " Reverse: " << revInt(value);
    return 0;
}