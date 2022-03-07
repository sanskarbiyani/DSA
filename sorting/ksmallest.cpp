#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    srand(time(NULL));
    int random = low + rand() % (high - low + 1);
    swap(arr[random], arr[high]);
    int pivot = arr[high];
    cout << "Pivot: " << pivot << "\n";
    int i = low - 1;
    for (int j = low; j < high; ++j)
    {
        if (arr[j] < pivot)
        {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    cout << "Array: ";
    for (int i = 0; i < 5; ++i)
        cout << arr[i] << " ";
    cout << "\n";
    return (i + 1);
}

// Function to find the kth smallest element in the array.
int kthSmallest(int arr[], int n, int k)
{
    // Your code here
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int p = partition(arr, low, high);
        if (p == k - 1)
            return arr[p];
        else if (p > k - 1)
            high = p - 1;
        else
            low = p + 1;
    }
    return -1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << kthSmallest(arr, n, k);
    cout << "\n";
}