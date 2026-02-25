#include <iostream>
using namespace std;

void Arrow(int n)
{
    // 🔴 Upper hollow pyramid
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        int total = 2 * (i - 1) + 1;

        for (int j = 1; j <= total; j++)
        {
            if (j == 1 || j == total || i == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    // 🟡 Vertical line (center)
    

    for (int i = 1; i <= n; i++)
    {
        int width = 2 * n - 1;
        for (int j = 1; j <= width; j++)
        {
            if (j == n)   // middle position
                cout << "* ";
            else
                cout << "  ";
        }
        
        cout << endl;
    }
}

int main()
{
    int n = 5;
    Arrow(n);
}