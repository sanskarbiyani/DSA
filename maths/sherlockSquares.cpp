#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int num = floor(sqrt(a));
        int start_num;
        if (num * num == a)
            start_num = num;
        else
            start_num = num + 1;
        int count = 0;
        for (int i = start_num; i * i <= b; i++)
            ++count;

        cout << count << "\n";
    }
}