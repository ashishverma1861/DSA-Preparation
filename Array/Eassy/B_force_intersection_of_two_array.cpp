#include <iostream>
#include <vector>
using namespace std;

// Function to find intersection using brute force approach
vector<int> intersectionBrute(vector<int> &arr1, vector<int> &arr2)
{
    // Step 1: Get sizes of both arrays
    int n1 = arr1.size();
    int n2 = arr2.size();

    // Step 2: Result vector to store intersection
    vector<int> result;

    // Step 3: Create a visited array for arr2
    // This helps to avoid using same element twice
    vector<int> visited(n2, 0);

    // Step 4: Traverse each element of arr1
    for(int i = 0; i < n1; i++)
    {
        // Step 5: For each element of arr1, check in arr2
        for(int j = 0; j < n2; j++)
        {
            // Step 6: If element is same AND not already used
            if(arr1[i] == arr2[j] && visited[j] == 0)
            {
                // Step 7: Add element to result
                result.push_back(arr1[i]);

                // Step 8: Mark this element of arr2 as used
                visited[j] = 1;

                // Step 9: Break because we found match for arr1[i]
                break;
            }

            // Step 10: Optimization
            // Since arrays are sorted, if arr2[j] becomes greater,
            // no need to check further
            if(arr2[j] > arr1[i])
                break;
        }
    }

    // Step 11: Return final intersection array
    return result;
}

int main()
{
    // Step 12: Two sorted input arrays
    vector<int> arr1 = {1, 2, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 6};

    // Step 13: Call brute force intersection function
    vector<int> ans = intersectionBrute(arr1, arr2);

    // Step 14: Print the result
    cout << "Intersection (Brute Force): " << endl;

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
