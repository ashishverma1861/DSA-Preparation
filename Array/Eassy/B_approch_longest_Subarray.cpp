#include<iostream>
#include<vector>
using namespace std;
 int longestSubarray(vector<int> &arr, int k)
 {
    int n=arr.size();
    int maxlenth = 0;

    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j = i; j < n; j++){
        sum = sum + arr[j];
        if(sum == k)
        {
            maxlenth = max(maxlenth , j-i+1);
        }
    }

    }
    return maxlenth;
 }
 int main()
 {
    vector<int> arr = {10,5,2,7,1,9};
    int k = 15;
    cout<<"longest subarray lenth is: "<< longestSubarray(arr,k);
    return 0;
 }