#include <bits/stdc++.h>
using namespace std;

bool isSorted(int a[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        if (a[i] < a[i - 1])
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    cout << "Array is sorted: " << isSorted(arr, n) << "\n";
}