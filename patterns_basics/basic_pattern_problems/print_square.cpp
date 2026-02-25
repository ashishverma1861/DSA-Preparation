#include <iostream>
using namespace std;

void print_square(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    // cout << "enter the value of n: " << endl;
    // cin >> n;

    // cout << "print_square: " << endl;
    // print_square(n);
}
