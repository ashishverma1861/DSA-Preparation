#include<iostream>
using namespace std;

int main()
{
    int arr[]={4,7,1,9,4,2,7};
    int n=7;

    int hash[10] = {0};

    for(int i=0; i<n; i++)
    {
        hash[arr[i]]=1;
    }

    int queries[] = {4,5,3,7};

    for(int i=0; i<n; i++)
    {
        int x = queries[i];
    

    if(hash[x] == 1)
    cout<< x << "-> yes"<<endl;
    else
    cout<< x << "-> No"<<endl;

    }
    return 0;
}
