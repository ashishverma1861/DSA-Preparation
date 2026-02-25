#include <iostream>
using namespace std;

void plus_pattern(int n)
{
    int mid = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (i == mid || j == mid)
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
    plus_pattern(n);
}