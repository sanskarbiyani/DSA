#include <bits/stdc++.h>
using namespace std;

int firstRepeated(int arr[], int n)
{
    // code here
    unordered_map<int, int> hash;
    for (int i = 0; i < n; ++i)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < n; ++i)
        if (hash[arr[i]] > 1)
            return i + 1;
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cout << firstRepeated(arr, n) << "\n";
}