#include <iostream>
using namespace std;
// R T P
void pattern_1(int n)
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}

// H R T P..
void pattern_2(int n)
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == n || i == j || j == 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "- ";
            }
        }
        cout << endl;
    }
}
//  upper pyramid pattern...

void UPPER_pyramid_pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        //space..
        for(int j=1; j<=(n-i); j++)
        {
             cout<<"- ";
        }
        //star..
        for(int j=1; j<=2*i-1; j++)
        {
            cout<<"* ";
        }
         //space..
        for(int j=1; j<=(n-i); j++)
        {
             cout<<"- ";
        }
        cout<<endl;

    }
}

//  lower pyramid pattern...

void lower_pyramid_pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        //space..
        for(int j=1; j<=(i-1); j++)
        {
             cout<<"- ";
        }
        //star..
        for(int j=1; j<=2*(n-i)+1; j++)
        {
            cout<<"* ";
        }
         //space..
        for(int j=1; j<=(i-1); j++)
        {
             cout<<"- ";
        }
        cout<<endl;

    }
}

int main()
{
    int n = 5;
    // pattern_1(n);
    // pattern_2(n);
    UPPER_pyramid_pattern(n);
    // lower_pyramid_pattern(n);
}