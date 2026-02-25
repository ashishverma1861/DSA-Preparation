#include <iostream>
using namespace std;

void Arrow(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        int total = 2 * (n - i) + 1;
        for (int j = 1; j <= total; j++)
        {
            if (i == 1 || j == 1 || j == total)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout<<endl;

        
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