#include <iostream>
#include <vector>
using namespace std;
int find_max_consecutive_ones(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;
    int max_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;

            if (count > max_count)
            {
                max_count = count;
            }
        }
        else
        {
            count = 0;
        }
    }
    return max_count;
}
int main()
{
    vector<int> arr = {1, 1, 0, 1, 1, 1};

    int result = find_max_consecutive_ones(arr);
    cout << " the Count Maximum Consecutive One's in the array: " << result;

    return 0;
}