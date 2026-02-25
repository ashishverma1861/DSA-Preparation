#include <iostream>
using namespace std;

void house_pattern(int n)
{
    // 🔴 Upper hollow pyramid
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        int total = 2 * (i - 1) + 1;

        for (int j = 1; j <= total; j++)
        {
            if (j == 1 || j == total || i == n)
                cout << "*";
            else
                cout << " ";
        }
       cout<<endl;
    }

     int weith = 2*n-1;
     int mid = n/2;
    for(int i=1; i<=n; i++)
    {
       
        for(int j=1; j<=weith; j++)
        {
            if(i==n||j==1||j==weith ||i==mid)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}
int main()
{
    int n=4;
    house_pattern(n);
}