#include <iostream>
using namespace std;
void print_increse_tringle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
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

    
    cout << "print_increse_tringle: " << endl;
    print_increse_tringle(n);
}