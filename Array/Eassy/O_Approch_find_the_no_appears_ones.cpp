#include<iostream>
#include<vector>
using namespace std;
int find_single(vector<int> & arr)
{
    int n= arr.size();
    int result = 0;
    for(int x : arr)
    {
        result = result ^ arr[x];
    }
    return result ;
}
int main()
{
    vector<int> arr = {1,1,2,3,3};
    cout << " single element is: " << find_single(arr);
    return 0;
}