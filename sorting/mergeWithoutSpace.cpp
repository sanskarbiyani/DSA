#include <bits/stdc++.h>
using namespace std;

void mergeWithoutSpace(long long arr1[], long long arr2[], int n, int m)
{
    // code here
    for (int gap = (n + m) / 2; gap > 0; --gap)
    {
        int low = 0, high = gap;
        while (high < (n + m))
        {
            if (high < n && arr1[low] > arr1[high])
            {
                swap(arr1[low], arr1[high]);
            }
            else if (high >= n && low < n && arr1[low] > arr2[high - n])
                swap(arr1[low], arr2[high - n]);

            else if (high >= n && low > n && arr2[low - n] > arr2[high - n])
                swap(arr2[low - n], arr2[high - n]);

            ++high;
            ++low;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    long long arr1[n], arr2[m];
    for (int i = 0; i < n; ++i)
        cin >> arr1[i];
    for (int i = 0; i < m; ++i)
        cin >> arr2[i];
    mergeWithoutSpace(arr1, arr2, n, m);
    cout << "Array1: ";
    for (int i = 0; i < n; ++i)
        cout << arr1[i] << " ";
    cout << "\nArray2: ";
    for (int i = 0; i < m; ++i)
        cout << arr2[i] << " ";
    cout << "\n";
}