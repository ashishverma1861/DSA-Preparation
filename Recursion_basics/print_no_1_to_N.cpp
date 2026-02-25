#include<iostream>
using namespace std;

//print no from 1 to N....
void print_1_to_N(int n)
{
    if(n == 0)
    {
        return;
    }
     print_1_to_N(n-1);
     cout<<n<<" ";
}
int main()
{
    int n=5;
    print_1_to_N(n);
    return 0;
}