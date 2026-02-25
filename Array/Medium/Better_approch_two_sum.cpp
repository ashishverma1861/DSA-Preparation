#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
bool find_target(vector<int> &arr , int target)
{
    unordered_map<int, int> mp;
   
    for(int i=0; i<arr.size(); i++ )
    {
        int Needed = target - arr[i];

        if(mp.find(Needed) != mp.end())
        {
            return true;
        }
        mp[arr[i] = i];
    }
    return false;
    
}
int main()
{
vector<int> arr = {2,6,5,8,11};
int target = 20;
if (find_target(arr,target))
    cout<<"yes";
    else
    cout<< " No";
    return 0;
}
