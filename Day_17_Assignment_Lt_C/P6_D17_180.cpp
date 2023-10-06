// Function to check whether the given number is palindrome or not
#include <iostream>
using namespace std;

// Palindrome Function
int checkPalindrome(int num) // 1215
{
    int num_p = num;

    if (num < 0)
        return 0;

    int rem, rev=0;
    while (num>0)
    {
        rem = num % 10;
        num = num / 10;
        rev = rev * 10 +rem;
    }

    if(num_p==rev)
        return 1;
    else
        return 0;
}

int main()
{
    int value;
    cout << "Enter the value: ";
    cin >> value;
    
    cout << "Is Palindrome? : " <<checkPalindrome(value)<< endl;

    return 0;
}
