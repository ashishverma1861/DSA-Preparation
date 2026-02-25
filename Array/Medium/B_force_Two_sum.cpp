#include<iostream>
#include<vector>
using namespace std;
bool find_target(vector<int> &arr , int target)
{
   
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=i+1; j<arr.size(); j++)
        {
            int sum = arr[i] + arr[j];
            if( sum == target)
            return true;

        }

    }
    return false;
}
int main()
{
vector<int> arr = {2,6,5,8,11};
int target = 14;
if (find_target(arr,target))
    cout<<"yes";
    else
    cout<< " No";
    return 0;
}
