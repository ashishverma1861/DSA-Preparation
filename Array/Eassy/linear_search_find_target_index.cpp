#include<iostream>
#include<vector>
using namespace std;

void Find_target(vector<int> &arr, int target)
{
    int n = arr.size();
    for(int i=0; i<n; i++)
    {
      if(arr[i] == target)
      cout<<"Target found at index: "<< i <<endl;
    }
    
}
int main()
{
    int target;
    cout<<"input the value of Target: "<<endl;
    cin>> target;

    vector<int> arr={1,4,3,6,7,8,2};

    Find_target(arr,target);
    
}