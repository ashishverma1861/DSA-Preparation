#include <iostream>
#include <vector>
using namespace std;

void Rotated_by_k(vector<int> &arr, int d)
{
    int n = arr.size();
    d = d % n;

    vector<int> temp;

    // store first d elements
    for (int i = 0; i < d; i++)
        temp.push_back(arr[i]);

    // shift remaining elements
    for (int i = d; i < n; i++)
        arr[i - d] = arr[i];

    // put temp elements at last
    for (int i = 0; i < d; i++)
        arr[n - d + i] = temp[i];
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7};

    int d;
    cout << "Enter value of d: ";
    cin >> d;

    Rotated_by_k(arr, d);

    cout << "Array after rotation: " << endl;

    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}
