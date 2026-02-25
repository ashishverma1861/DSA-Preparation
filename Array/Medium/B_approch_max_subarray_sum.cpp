#include<bits/stdc++.h>
#include<climits>
using namespace std;

int Max_Subarray_sum(vector<int> & arr)
{
    int n = arr.size();
    int Maxsum = INT_MIN;

    for(int st=0; st<n; st++)
    {
        int sum = 0;
        for(int end=st; end<n; end++)
        {
            sum = sum + arr[end];
            Maxsum = max(Maxsum , sum);
        }
    }
    return Maxsum;
}
int main()
{
    vector<int> arr = { 3,-4,5,4,-1,7,-8};
    cout<<Max_Subarray_sum(arr);
    return 0;
}