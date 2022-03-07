#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(vector<ll> A, vector<ll> B, int N)
{
    // code here
    unordered_map<ll, ll> mp;
    for (int i = 0; i < N; ++i)
        mp[A[i]]++;
    cout << "Initial Map:\n";
    for (auto it : mp)
        cout << it.first << "\t" << it.second << "\n";

    cout << "\nUpdating map\n\n";
    for (int i = 0; i < N; ++i)
    {
        mp[B[i]]--;
        cout << "Updating for " << B[i] << "\n";
        if (mp[B[i]] == 0)
            mp.erase(B[i]);

        for (auto it : mp)
            cout << it.first << "\t" << it.second << "\n";
        cout << "\n";
    }
    cout << "\n\n";
    for (auto it : mp)
        cout << it.first << "\t" << it.second << "\n";
    cout << "Map size: " << mp.size() << "\n";
    if (mp.size() == 0)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    vector<ll> A(n, 0), B(n, 0);
    for (int i = 0; i < n; ++i)
        cin >> A[i];
    for (int i = 0; i < n; ++i)
        cin >> B[i];
    cout << check(A, B, n) << "\n";
}