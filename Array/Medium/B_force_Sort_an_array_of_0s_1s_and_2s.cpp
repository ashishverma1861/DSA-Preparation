#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sort_zero_ones_twos(vector<int> &arr)
{
    sort(arr.begin(), arr.end());   // sort only once
    return arr;
}

int main ()
{
    vector<int> arr = {1,2,0,2,2,1,0,0};

    arr = sort_zero_ones_twos(arr);

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
