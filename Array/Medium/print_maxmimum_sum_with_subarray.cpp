
#include <bits/stdc++.h>
using namespace std;

void maxSubarray(vector<int> &arr)
{
    int n = arr.size();

    int sum = 0;
    int maxi = INT_MIN;

    int start = 0;        // temporary start
    int ansStart = 0;     // final start
    int ansEnd = 0;       // final end

    for(int i = 0; i < n; i++)
    {
        // If sum is 0, start new subarray
        if(sum == 0)
            start = i;

        sum += arr[i];

        // Update maximum sum
        if(sum > maxi)
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        // If sum becomes negative, reset
        if(sum < 0)
            sum = 0;
    }

    // Output results
    cout << "Maximum Sum: " << maxi << endl;

    cout << "Subarray: ";
    for(int i = ansStart; i <= ansEnd; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr = {3,-4,5,4,-1,7,-8};

    maxSubarray(arr);

    return 0;
}
