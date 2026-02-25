#include <iostream>
using namespace std;

int Fibonacci_Number(int n)
{
    if (n <= 1)
        return n;

    return Fibonacci_Number(n - 1) + Fibonacci_Number(n - 2);
}
int main()
{
    int n = 7;
    cout << "the febonacci serise of:" << n << endl;
    for (int i = 0; i <= n; i++)
    {
      cout << Fibonacci_Number(i)<<"  ";
    }
    return 0;
}