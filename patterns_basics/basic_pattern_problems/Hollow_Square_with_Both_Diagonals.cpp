#include <iostream>
using namespace std;
void Hollow_Square_with_Both_Diagonals(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || i == j || i + j == n - 1)
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

    
    cout << "Hollow_Square_with_Both_Diagonals: " << endl;
    Hollow_Square_with_Both_Diagonals(n);
}