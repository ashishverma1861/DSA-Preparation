#include<iostream>
#include<vector>
using namespace std;

// Function to find longest subarray with sum exactly K
int longestSubarray(vector<int> &arr, int k)
{
    int n = arr.size();

    // Two pointers for sliding window
    int i = 0;      // left pointer
    int j = 0;      // right pointer

    int sum = 0;        // to store current window sum
    int maxLength = 0;  // to store maximum length found

    // Traverse array using right pointer
    while(j < n)
    {
        // Step 1: Add current element to sum
        sum = sum + arr[j];

        // Step 2: If sum becomes greater than k
        // shrink window from left side
        while(sum > k && i <= j)
        {
            sum = sum - arr[i];   // remove element at index i
            i++;                  // move left pointer forward
        }

        // Step 3: If current window sum equals k
        // update maximum length
        if (sum == k)
        {
            maxLength = max(maxLength, j - i + 1);
        }

        // Step 4: Expand window by moving right pointer
        j++;
    }

    // Step 5: Return final answer
    return maxLength;
}

int main()
{
    // Example input array
    vector<int> arr = {10,5,2,7,1,9};

    int k = 15;

    // Function call
    cout << "Longest subarray length is: " 
         << longestSubarray(arr, k);

    return 0;
}
