#include<iostream>
using namespace std;
void reverse(int n)
{
    if( n== 0)
    return;
    cout<<n%10;
    reverse(n/10);
}
int main()
{
    int n ;
    cout<<"enter the value of n: "<<endl;
    cin>>n;
    reverse(n);
    return 0;

}

// using recursion with:

// n % 10 → to get last digit

// n / 10 → to remove last digit

// Base case is when n == 0

// Two ways:

// Just print digits

// Actually return reversed integer