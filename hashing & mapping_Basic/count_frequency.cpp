#include<iostream>
 using namespace std;

int main()
{
    int arr[] ={2,3,2,5,3,2};
    int n=6;

    int hash[6] = {0};

    for(int i=0 ; i<n ; i++)
    {
        hash[arr[i]]++;
    }

    cout<<"frequency of 2: "<<hash[2]<<endl;
    cout<<"frequency of 3: "<<hash[3]<<endl;
    cout<<"frequency of 5: "<<hash[5]<<endl;
    cout<<"frequency of 4: "<<hash[4]<<endl;

    return 0;
}