#include<iostream>
#include<vector>
using namespace std;

// Function to find union of two sorted arrays
vector<int> Find_union_array(vector<int> &arr1, vector<int> &arr2)
{
    // Step 1: Get sizes of both arrays
    int n1 = arr1.size();
    int n2 = arr2.size();

    // Step 2: Initialize two pointers for both arrays
    int i = 0;   // pointer for arr1
    int j = 0;   // pointer for arr2

    // Step 3: Create a vector to store final union result
    vector<int> unionArr;

    // Step 4: Traverse both arrays using two pointers
    while (i < n1 && j < n2)
    {
        // Case 1: Element in arr1 is smaller or equal
        if (arr1[i] <= arr2[j])
        { 
            // Check if unionArr is empty OR last inserted element is not same
            // This condition avoids inserting duplicates
            if (unionArr.size() == 0 || unionArr.back() != arr1[i])
            {
                unionArr.push_back(arr1[i]);   // insert arr1 element
            }
            i++;   // move pointer of arr1
        }

        // Case 2: Element in arr2 is smaller
        else
        {
            // Again check for duplicate before inserting
            if (unionArr.size() == 0 || unionArr.back() != arr2[j])
            {
                unionArr.push_back(arr2[j]);   // insert arr2 element
            }
            j++;   // move pointer of arr2
        }
    }

    // Step 5: If elements are left in arr2 after arr1 is finished
    while (j < n2)
    {
        // Avoid duplicates while inserting
        if (unionArr.size() == 0 || unionArr.back() != arr2[j])
        {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    // Step 6: If elements are left in arr1 after arr2 is finished
    while (i < n1)
    {
        // Avoid duplicates while inserting
        if (unionArr.size() == 0 || unionArr.back() != arr1[i])
        {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    // Step 7: Return the final union array
    return unionArr;
}

int main ()
{
    // Step 8: Input two sorted arrays
    vector<int> arr1 = {1,1,2,3,4,5};
    vector<int> arr2 = {2,3,4,4,5,6};

    // Step 9: Call function to find union
    vector<int> result = Find_union_array(arr1, arr2);

    // Step 10: Print the result
    cout << "Union of two arrays is: " << endl;

    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
