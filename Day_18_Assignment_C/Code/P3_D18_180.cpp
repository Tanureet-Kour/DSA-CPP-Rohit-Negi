//There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a.Do it using function.
#include<iostream>
using namespace std;

void condition(int &n1, int &n2, int &n3)// 1 5 2
{
    n2 = n1;//b = a // b=5
    n3 = n2;//c = b // c=5
    n1 = n3;//a = c // a=5
}

int main()
{
    int a,b,c;
    cout<<"Enter values: ";
    cin>>a>>b>>c;
    cout<<"Before condition: "<<a<<" "<<b<<" "<<c<<endl;
    condition(a,b,c);
    cout<<" After condition: "<<a<<" "<<b<<" "<<c;

    return 0;
}
