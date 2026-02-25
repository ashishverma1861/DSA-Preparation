#include <iostream>
#include <vector>
using namespace std;

void L_rotated_by_one(vector<int> &v)
{
    int temp_for_L = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        v[i - 1] = v[i];
    }
    v[v.size() - 1] = temp_for_L;
}

void R_rotated_by_one(vector<int> &v)
{
    int temp_for_R = v[v.size() - 1];
    for (int i = v.size(); i > 0; i--)
    {
        v[i] = v[i - 1];
    }
    v[0] = temp_for_R;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    cout << "orignal array: " << endl;
    for (int i = 0; i <v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    L_rotated_by_one(v);
    cout << "after left rotation: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<" ";
    }

    cout << endl;

    R_rotated_by_one(v);
    cout << "after right rotation: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<" ";
    }
    return 0;
}
