#include<iostream>
using namespace std;

void Hollow_dimond(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        int total = 2*i-1;
        for(int j=0; j<=total; j++)
        {
          if(j==1||j==total)
          {
            cout<<"*";
          }
          else{
            cout<<" ";
          }
        }
        cout<<endl;
     }
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        int total = 2*i-1;
        for(int j=0; j<=total; j++)
        {
          if(j==1||j==total)
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
    int n=5;
    Hollow_dimond(n);
}