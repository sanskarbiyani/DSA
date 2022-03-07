#include <bits/stdc++.h>
using namespace std;

const int CHAR = 26;
bool checkPangram(string &str)
{
    // your code here
    int freq[CHAR] = {0};
    for (int i = 0; i < str.length(); ++i)
    {
        char ch = tolower(str[i]);
        if (ch >= 97 && ch <= 122)
        {
            freq[ch - 'a']++;
        }
    }
    for (int i = 0; i < CHAR; ++i)
    {
        cout << (char)(97 + i) << "  --  " << freq[i] << "\n";
    }
    for (int i = 0; i < CHAR; ++i)
    {
        if (freq[i] == 0)
            return false;
    }
    return true;
}

int main()
{
    string s1;
    getline(cin, s1);
    cout << checkPangram(s1) << "\n";
}