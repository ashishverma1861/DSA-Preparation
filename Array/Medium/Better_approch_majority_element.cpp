#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int find_majority_element(vector<int> &arr)
{
    int n = arr.size();   
    unordered_map<int, int> umap;

    for (int i = 0; i<n; i++ )
    {
        umap[arr[i]]++;

        if(umap[arr[i]] > n/2)
        {
            return arr[i];
        }
    }
    
    return -1;
}

int main()
{
    vector<int> arr = {7, 0, 0, 1, 7, 7, 2, 7, 7};

    int ans = find_majority_element(arr);

    cout << ans;
}