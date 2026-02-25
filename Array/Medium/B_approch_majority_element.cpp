#include <iostream>
#include <vector>
using namespace std;

int find_majority_element(vector<int> &arr)
{
     int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n ; j++)
        {
             if (arr[i] == arr[j])
            count++;
        }
        if (count > n / 2)
            return arr[i];
    }
    return -1;
}
int main ()
{
    vector<int> arr = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    
     int ans = find_majority_element(arr);

     cout<< ans ;

}