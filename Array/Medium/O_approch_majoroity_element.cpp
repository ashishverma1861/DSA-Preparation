#include <bits/stdc++.h>
using namespace std;

int find_majority_element(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;
    int element = 0;

    // Step 1: Find candidate
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            element = arr[i];
        }

        if (arr[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // Step 2: Verify
    int count_1 = 0;
    for (int x : arr)
    {
        if (x == element)
        {
            count_1++;
        }
    }

    if (count_1 >= n / 2)
    {
        return element;
    }

    return -1;   
}

int main()
{
    vector<int> arr = {7,7,0,1,2,7,7,2,1,7,7,7};

    cout << find_majority_element(arr);

    return 0;
}
