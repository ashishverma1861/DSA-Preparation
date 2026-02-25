#include<iostream>
#include<vector>
#include<map>
using namespace std;

void find_Union_element(vector<int> &arr1 , vector<int> &arr2)
{
    map<int , int> mp;

    for(int i=0; i<arr1.size(); i++)
    {
        mp[arr1[i]] = 1;
    }

    for(int i=0; i<arr2.size(); i++)
    {
        mp[arr2[i]] = 1;
    }

    for(auto it : mp)
    {
        cout<<it.first<<" ";
    }
}
int main()
{
    vector<int> arr1 = {1,2,2,3,4};
    vector<int> arr2 = {3,4,5,6};
    find_Union_element(arr1 , arr2);

}