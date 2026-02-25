#include <iostream>
using namespace std;

void print_increse_hollow_tringle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (i == n - 1 || i == j || j == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    // cout << "enter the value of n: " << endl;
    // cin >> n;

     cout<<"print_increse_hollow_tringle: " <<endl;
    print_increse_hollow_tringle(n);
}