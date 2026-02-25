#include<iostream>
#include<vector>
using namespace std;

int find_the_no_appears_ones(vector<int> &arr)
{
    int n = arr.size();
    int count;
    for(int i=0; i<n; i++)
    {
        count = 0;
        for( int j=0; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count ++;
            }
            
        }
        if ( count == 1)
            return arr[i];
        
    }
    return -1;
}
int main ()
{
    vector<int> arr = {2,2,1};
    cout<<" single element is: "<< find_the_no_appears_ones(arr);
    return 0;


}