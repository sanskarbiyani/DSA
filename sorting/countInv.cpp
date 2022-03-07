#include <bits/stdc++.h>
using namespace std;

long long merge(long long arr[], long long l, long long m, long long r)
{
    long long n1 = m - l + 1, n2 = r - m, i, k, j;
    long long left[n1], right[n2];
    for (i = 0; i < n1; ++i)
    {
        left[i] = arr[l + i];
    }
    for (j = 0; j < n2; ++j)
    {
        right[j] = arr[m + 1 + j];
    }
    long long res = 0;
    i = 0;
    k = l, j = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i++];
        }
        else
        {
            res += n1 - i;
            arr[k] = right[j++];
        }
        ++k;
    }

    while (i < n1)
    {
        arr[k++] = left[i++];
    }
    while (j < n2)
    {
        arr[k++] = right[j++];
    }
    return res;
}

long long mergeSort(long long arr[], long long l, long long r)
{
    long long res = 0;
    if (l < r)
    {
        long long m = l + (r - l) / 2;
        res += mergeSort(arr, l, m);
        res += mergeSort(arr, m + 1, r);
        res += merge(arr, l, m, r);
    }
    return res;
}

long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    return mergeSort(arr, 0, N - 1);
}

int main()
{
    long long N;
    cin >> N;
    long long A[N];
    for (long long i = 0; i < N; ++i)
        cin >> A[i];
    cout << "Array is: ";
    for (long long i = 0; i < N; ++i)
        cout << A[i];
    cout << "\n";
    cout << inversionCount(A, N) << "\n";
}