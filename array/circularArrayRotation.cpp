#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int revArr[n];
    k = k % n;
    int j = 0;
    for (int i = n - k; i < n; ++i)
    {
        revArr[j] = arr[i];
        ++j;
    }
    for (int i = 0; i < n - k; ++i)
    {
        revArr[j] = arr[i];
        ++j;
    }
    while (q--)
    {
        int ind;
        cin >> ind;
        cout << revArr[ind] << "\n";
    }
    return 0;
}