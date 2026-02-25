#include<iostream>
#include<vector>
using namespace std;

vector<int>sort_zero_ones_twos(vector<int> &arr)
{
    int n= arr.size();
    int  count_0 = 0 ,count_1 = 1, count_2 = 2; 
    for(int i=0; i<n; i++)
    {
       if( arr[i] == 0)
       count_0++;
       else if(arr[i] == 1)
       count_1++;
       else
       count_2++;

    }
    for(int i = 0; i<count_0; i++)
    {
       arr[i] = 0;
    }
    for(int i = count_0; i<count_0 + count_1; i++)
    {
       arr[i] = 1;
    }
    for(int i = count_0+count_1; i<n; i++)
    {
       arr[i] = 2;
    }
   return arr;
}
int main()
{
    vector<int> arr ={1,2,0,2,2,1,0,0};

    sort_zero_ones_twos(arr);
    for(int i=0; i<arr.size(); i++)
    {
        cout<< arr[i]<<" ";
    }

}