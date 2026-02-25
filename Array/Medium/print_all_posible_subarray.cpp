#include <bits/stdc++.h>
using namespace std;
void find_all_posible_subarray(vector<int> &arr)
{
    int n = arr.size();

    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            // print all possible subarray..
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout<<" ";
        }
        cout << endl;;
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    find_all_posible_subarray(arr);
    return 0;
}
