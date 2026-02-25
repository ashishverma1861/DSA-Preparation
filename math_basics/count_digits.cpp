#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;
// count digits....
int count_digits(int n)
{
    int count = 0;
    while (n > 0)
    {

        n = n / 10;
        count++;
    }
    return count;
}
// reverse number...
int reverse_number(int n)
{
    int reverse = 0;
    while (n > 0)
    {
        int last_digits = n % 10;
        // check for over flow and under flow int value usefull for leet code
        //  if (n == INT_MAX/10 || n == INT_MIN/10)
        //  return 0;
        reverse = reverse * 10 + last_digits;
        n = n / 10;
    }
    return reverse;
}
// check palindrome no or not...
bool is_palindrome(int n)
{
    int orignal = n;
    int rev = 0;

    while (n > 0)
    {
        int digits = n % 10;

        // check for over flow and under flow int value usefull for leet code
        //  if (rev == INT_MAX/10 || rev == INT_MIN/10)
        //  return 0;

        rev = rev * 10 + digits;
        n = n / 10;
    }
    return orignal == rev;
}
// find GCD and HCF of two given number..
// 1st approch :- brute force
int GCD_brute(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    int ans = 1;
    int mini = min(a, b);

    for (int i = 1; i <= mini; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}
//  2nd approch:- better approch..
int GCD_better(int a, int b)
{
    int mini = min(a, b);
    for (int i = mini; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
    return 1;
}
// print all divisor of a given number...
int Divisior_of_no(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << ",";
        }
    }
}
vector<int> print_divisior(int n)
{
    vector<int> divisior;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
        divisior.push_back(i);
            if (i != n / i)
            {
                divisior.push_back(n / i);
            }
        }
    }
    sort(divisior.begin() , divisior.end());
    return divisior;
}

int main()
{
    int n;
    cout << "enter the value of n: ";
    cin >> n;

    // cout << "count digits: " << endl;
    // cout << count_digits(N);

    // cout<<"reverse number: "<<endl;
    // cout<<reverse_number(n);

    // cout<<"check palindrome no or not: "<<endl;
    // if(is_palindrome(n))
    // cout<<"is plaindrome: ";
    // else
    // cout<<"Not palindrome: ";

    // cout<<" find gcd of two given no: "<<endl;...

    //// brute approch..
    // int a,b;
    // cin >>a>>b;
    // cout<<GCD_better(a,b);

    //// better approch..
    // int a,b;
    // cin>>a>>b;
    // cout<<GCD_better(a,b);
    ////optimal approch...
    // divisor of given number....
    // brute force approch..
    // Divisior_of_no(n);
    // optimal approch...
     vector<int> divisors = print_divisior(n);

    cout << "Divisors: ";
    for (int x : divisors)
        cout << x <<" ";

    return 0;

}