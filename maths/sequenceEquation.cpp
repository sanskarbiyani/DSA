#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        mp[temp] = i + 1;
    }
    // for (auto it : mp)
    //     cout << "mp[" << it.first << "] = " << it.second << "\n";
    for (int i = 1; i <= n; ++i)
    {
        cout << mp[mp[i]] << "\n";
    }
    return 0;
}