#include <bits/stdc++.h>
#include <climits>
using namespace std;

int Max_subarray_sum(vector<int> &arr)
{
    int n = arr.size();
    int currsum = 0;
    int maxsum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currsum = currsum + arr[i];
        maxsum = max(maxsum, currsum);

        if (currsum < 0)
            currsum = 0;
    }
    return maxsum;
}
int main()
{
    vector<int > arr={3,-4,5,4,-1,7,-8};
    cout<<Max_subarray_sum(arr);
    return 0;
}