#include <iostream>
using namespace std;

int main()
{
    string s = "abcdabefc z";

    int hash[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }
    cout << "Frequency of a: " << hash['a' - 'a'] << endl;
    cout << "Frequency of c: " << hash['c' - 'a'] << endl;
    cout << "Frequency of z: " << hash['z' - 'a'] << endl;

    return 0;
}