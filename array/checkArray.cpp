#include <bits/stdc++.h>
using namespace std;
bool checkRotatedAndSorted(int arr[], int n)
{
    int asc = 0, desc = 0;
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > arr[i - 1])
            ++asc;
        else
            desc++;
    }
    cout << "Asc: " << asc << "\tDesc: " << desc << "\n";
    if (asc == 1 || desc == 1)
    {
        if ((desc == 1 && arr[n - 1] < arr[0]) || (asc == 1 && arr[n - 1] > arr[0]))
        {
            // return false;
            // cout << "Inside.\n";
            return true;
        }
        return false;
    }
    return false;
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
    cout << "Sorted and Rotated: ";
    bool val = checkRotatedAndSorted(arr, n);
    if (val)
        cout << "Yes";
    else
        cout << "No";
    cout << "\n";
}