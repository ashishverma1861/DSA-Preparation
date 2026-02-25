#include <iostream>
using namespace std;

int main()
{
    string s = "abcdabefc";
    int hash[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a'] = 1;
    }
    char ch;

    cout << "Enter character to check: ";
    cin >> ch;

    if (hash[ch - 'a'] == 1)
        cout << ch << " is PRESENT in string" << endl;
    else
        cout << ch << " is NOT PRESENT in string" << endl;

        
}