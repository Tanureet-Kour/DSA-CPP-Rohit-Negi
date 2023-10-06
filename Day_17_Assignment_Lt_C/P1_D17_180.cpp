// Function to Add digits given as an input by the user in a given number (single digit sum)
#include <iostream>
using namespace std;

int singleSum(int num)
{
    while (num>9)//15
    {
        int rem, sum = 0;
        while (num)
        {
            rem = num % 10;
            num = num / 10;
            sum = sum + rem;
        }
        num = sum;
    }
}

int main()
{
    int value;
    cout << " Enter the value: ";
    cin >> value;
    cout << "Single Digit Sum: " << singleSum(value) << endl;//78

    return 0;
}
