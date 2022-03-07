#include <bits/stdc++.h>
using namespace std;

int maxIndexDiff(int arr[], int n)
{
    // Your code here
    int i;
    // We want to find the minimium element before the slope starts rising
    // Bcause before it there won't be element with the condition matching.
    // Wrong solution bcause we only checked for the first min elem
    // eg test case 136 154 115 56 98 78 138 134 75 120
    int diff;
    for (i = 0; i < n - 1; ++i)
    {
        if (arr[i] <= arr[i + 1])
            break;
    }
    cout << "i: " << i << "\t value: " << arr[i] << "\n";

    int j;
    for (j = n - 1; j >= i; --j)
    {
        if (arr[i] <= arr[j])
        {
            diff = j - i;
            break;
        }
    }
    cout << "j: " << j << "\t value: " << arr[j] << "\n";

    if (i != 0)
    {
        for (int k = i - 1; k >= 0; --k)
        {
            if (arr[k] <= arr[j])
            {
                int temp = j - k;
                if (temp > diff)
                {
                    diff = temp;
                }
            }
        }
    }
    return diff;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << maxIndexDiff(arr, n) << "\n";
}