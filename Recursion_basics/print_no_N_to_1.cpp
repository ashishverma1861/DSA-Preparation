#include<iostream>
using namespace std;
 void print_no_N_to_1(int n)
 {
    if(n == 0)
    {
        return;
    }
    cout<< n <<" ";
    print_no_N_to_1(n-1);
 }
 int main()
 {
    int n=5;
    print_no_N_to_1(n);
    return 0;
 }