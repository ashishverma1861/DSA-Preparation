#include <iostream>
using namespace std;
void print_hollow_square(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
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

    cout << "print_hollow_square: " << endl;
    print_hollow_square(n);
}
