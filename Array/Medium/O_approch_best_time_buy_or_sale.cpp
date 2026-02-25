#include<bits/stdc++.h>
using namespace std;

int find_Max_profit(vector<int> &price)
{
    int n=price.size();
    int minPrice = price[0];
    int maxProfit = 0;

    for(int i=0; i<n; i++)
    {
        if(price[i] < minPrice)
        {
            minPrice = price[i];
        }
        int profit = ( price[i] - minPrice);
        maxProfit = max(maxProfit , profit);

    }
    return maxProfit;
}
int main()
{
    vector<int> price = {7,1,5,3,6,4};
    cout<< "the maximum profit is => "<<find_Max_profit(price);
    return 0;
}
