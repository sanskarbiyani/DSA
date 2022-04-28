#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, s;
        cin >> n >> m >> s;
        int warned = s + (m % n) - 1;
        if (warned == 0)
            cout << n << "\n";
        else if (warned <= n)
            cout << warned << "\n";
        else
            cout << warned % n << "\n";
        // cout << warned << "\n";
    }
    return 0;
}
