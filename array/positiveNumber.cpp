#include <bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n)
{
    // Your code here
    // First attempt
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    int a[n + 1] = {0};
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < 0 || arr[i] >= n)
        {
            cout << "\nIgnoring " << arr[i];
            continue;
        }
        a[arr[i] % n] = 1;
        cout << "\nSetting a[" << arr[i] % n << "] to 1.";
    }
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] == 0)
            return i + 1;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "\n\nMissing Number: " << missingNumber(arr, n) << endl;
}