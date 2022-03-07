#include <bits/stdc++.h>
using namespace std;

vector<string> sset; // declared global
vector<string> powerSet(string s, string curr = "", int i = 0)
{
    if (i == 0)
    {
        sset.clear(); // erasing previous powersets
    }
    int n = s.size();
    if (i == n)
    {
        sset.push_back(curr);
        return sset;
    }
    powerSet(s, curr, i + 1);
    powerSet(s, curr + s[i], i + 1);
    return sset;
}

int main()
{
    string s;
    cin >> s;
    vector<string> arr = powerSet(s);
    for (auto str : arr)
    {
        cout << str << " ";
    }
    cout << "\n";
}