#include<iostream>
using namespace std;

void cross_pattern(int n)
{
    for(int i =1; i<=n; i++)
    {
        for(int j=1; j<=n; j++ )
        {
            if(i==j||i==n-j+1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n=5;
    cross_pattern(n);
}