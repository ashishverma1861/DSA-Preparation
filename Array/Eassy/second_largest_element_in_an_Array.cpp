#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int second_largest(vector<int> & v)
{
   int largest = INT_MIN;
   int second_lr = INT_MIN;

   for(int i=0; i<v.size(); i++)
   {
    if(v[i]>largest)
    {
        second_lr = largest;
        largest = v[i];
    }
    else if(v[i]>second_lr && v[i]!=largest)
    {
        second_lr = v[i];

    }
    
   }
   return second_lr;
}
int main()
{
    vector<int> v = {7,3,4,6,9,};
    int s_largest = second_largest(v);
    cout<<s_largest<<endl;
return 0;
}