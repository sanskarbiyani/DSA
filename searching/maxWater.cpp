#include <bits/stdc++.h>
using namespace std;

int maxWater(int height[], int n)
{
    // Your code here
    int low = 0, high = n - 1, max_water, res = 0;
    while (low <= high)
    {
        max_water = min(height[low], height[high]) * (high - low - 1);
        res = max(res, max_water);
        cout << "Value for res: " << res << "\n";
        if (height[low] > height[high])
        {
            high--;
        }
        else
        {
            ++low;
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int height[n];
    for (int i = 0; i < n; ++i)
        cin >> height[i];
    cout << "\nMaximium Water: \n"
         << maxWater(height, n) << "\n";
}