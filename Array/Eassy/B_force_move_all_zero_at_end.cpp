#include<iostream>
#include<vector>
using namespace std;

void move_all_Zero_at_end(vector<int> &arr)
{
    vector<int> temp;
    int n = arr.size();

    // Step 1: store non-zero elements
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }

    // Step 2: copy non-zero elements back to array
    int index = 0;
    for(int i = 0; i < temp.size(); i++)
    {
        arr[index++] = temp[i];
    }

    // Step 3: fill remaining positions with zeros
    while(index < n)
    {
        arr[index++] = 0;
    }
}

int main()
{
    vector<int> arr = {1,0,2,3,0,4,0,1};

    move_all_Zero_at_end(arr);

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
