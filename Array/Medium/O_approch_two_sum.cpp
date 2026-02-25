#include <iostream>
#include <vector>
using namespace std;

bool find_target(vector<int> &arr, int target)
{
    int i = 0;
    int j = arr.size() - 1;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == target)
        {
            return true;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
}
int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    if (find_target(arr, target))
        cout << "yes";
    else
        cout << " No";
    return 0;
}
