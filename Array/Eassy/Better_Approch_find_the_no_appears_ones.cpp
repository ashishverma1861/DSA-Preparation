#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int find_single_appears(vector<int> &arr)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second == 1)
            return it.first;
    }
    return -1;
}
int main()
{
    vector<int> arr = {1,1,2,3,3};
    cout << " single element is: " << find_single_appears(arr);
    return 0;
}