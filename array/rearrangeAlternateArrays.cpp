/*
    Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively
    i.e first element should be max value, second should be min value, third should be second max,
    fourth should be second min and so on.
*/

void rearrange(long long *arr, int n)
{
    // Your code here
    int low = 0, high = n - 1, m = arr[n - 1] + 1;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            arr[i] = (arr[high] % m) * m + arr[i];
            --high;
        }
        else
        {
            arr[i] = (arr[low] % m) * m + arr[i];
            ++low;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        arr[i] = arr[i] / m;
    }
}