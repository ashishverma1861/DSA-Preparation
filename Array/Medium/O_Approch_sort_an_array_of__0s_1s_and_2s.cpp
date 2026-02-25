#include<iostream>
#include<vector>
using namespace std;

vector<int> sort_zero_ones_twos(vector<int> &arr)
{
    int low = 0;
    int mid = 0;
    int high = arr.size()-1;

    while (mid<=high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else    //(arr[mid] == 2)
        {
            swap(arr[mid] , arr[high]);
            high--;
        }
    }
    return arr;
    
}
int main ()
{
    vector<int> arr = {1,2,0,1,1,1,0,2,0,0,0,2};
    sort_zero_ones_twos(arr);
    for(int i=0; i<arr.size(); i++)
    {
        cout<< arr[i]<<"," ;
    }
}