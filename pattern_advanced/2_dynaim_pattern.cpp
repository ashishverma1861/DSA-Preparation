#include <iostream>
using namespace std;

int main()
{
    // upper pyramid part.... 
    int n = 3;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "  ";
        }

        cout << endl;
    }
    // lower U part...

    for(int i=1; i<=n; i++)
    {
        int mid = 2*n-1;   // find the center of the tringle for alingment...

        for(int j=1; j<=mid-1; j++)
        {
            cout<<"-";
        }
        
        for(int j=1; j<=mid; j++)
        {
            if(j==1||i==n||j==mid)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}