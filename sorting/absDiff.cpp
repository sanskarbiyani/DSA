#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int k, int l, int m, int h)
{
    int n1 = m - l + 1, n2 = h - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; ++i)
        left[i] = arr[l + i];
    for (int j = 0; j < n2; ++j)
        right[j] = arr[m + 1 + j];

    int i = 0, j = 0, ind = l;
    while (i < n1 && j < n2)
    {
        int left_diff = abs(left[i] - k);
        int right_diff = abs(right[j] - k);
        if (left_diff <= right_diff)
            arr[ind++] = left[i++];
        else
            arr[ind++] = right[j++];
    }

    while (i < n1)
        arr[ind++] = left[i++];
    while (j < n2)
        arr[ind++] = right[j++];
}

void mergeSort(int arr[], int k, int l, int h)
{
    if (l < h)
    {
        int m = l + (h - l) / 2;
        mergeSort(arr, k, l, m);
        mergeSort(arr, k, m + 1, h);
        merge(arr, k, l, m, h);
        cout << "Sorted array till now: ";
        for (int i = l; i < h; ++i)
            cout << arr[i] << " ";
        cout << "\n";
    }
}
void sortABS(int A[], int N, int k)
{
    // Your code here
    mergeSort(A, k, 0, N - 1);
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    sortABS(arr, n, k);
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}