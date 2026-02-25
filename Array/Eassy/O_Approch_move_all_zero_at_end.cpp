#include<iostream>
#include<vector>
using namespace std;

void move_zero(vector<int> & arr)
{
    int n = arr.size();
    int j=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }

}
int main()
{
    vector<int> arr={1,0,2,3,0,4,0,1};
    move_zero(arr);
    
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
