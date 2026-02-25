#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
// //brute force approch. by using sort function...
// int largest_element(vector<int> & v)
// {
//     sort(v.begin() , v.end());
//     return v[v.size()-1];
// }
// int main()
// {
//     vector<int> v={3,2,1,5,2};
//     int ans = largest_element(v);
//     cout<<"the largest element is : " <<ans ;
//     return 0;
// }


// optimal solution...
int largest_element(vector<int> & v)
{
    int largest = v[0];

    for(int i=0; i<v.size(); i++)
    {
        if(v[i]>largest)
        {
            largest = v[i];
        }
    }
    return largest;
}
int main()
{
    vector<int> v = {3,2,1,5,2};
    int ans = largest_element(v);
    cout<<"the largest element is : " <<ans ;
    return 0;
}