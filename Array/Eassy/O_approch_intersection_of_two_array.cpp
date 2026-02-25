#include<iostream>
#include<vector>
using namespace std;

vector<int> find_common_element(vector<int> &arr1 , vector<int> &arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i=0 , j=0;
    vector<int> result;

    while(i < n1 && j < n2)
    {
        if ( arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else{
            if (result.size()==0 || result.back() != arr1[i])
            result.push_back(arr1[i]);
            i++;
            j++;
        }
        
        
        
    }
    return result;
}
int main ()
{
   vector<int> arr1 = {1,2,2,2,3};
   vector<int> arr2 = {2,2,3};

   vector<int> ans = find_common_element(arr1 , arr2);
   cout<<" the intersection of two array is: "<< endl;
    for( int x : ans)
    { 
        cout<< x << " ";
    }
    return 0;


}