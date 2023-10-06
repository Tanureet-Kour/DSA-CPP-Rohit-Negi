//Function to find a leap year
#include<iostream>
using namespace std;

int checkLeapYr(int yr)
{
    if(yr%400==0)//Definitely Leap Year
        return 1;

    else if(yr% 4==0 && yr%100 !=0)//Divisible by 4 but not 100 then only
        return 1;

    else
        return 0;
}

int main()
{
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    cout<<"Is it Leap Year? : "<<checkLeapYr(year)<<endl;

    return 0;
}