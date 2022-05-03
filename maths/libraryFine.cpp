#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d1, d2, y1, y2, m1, m2;
    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;
    if (y2 < y1)
        cout << 10000;
    else if (m2 < m1 && y1 == y2)
        cout << (500 * (m1 - m2));
    else if (d2 < d1 && m1 == m2 && y1 == y2)
        cout << (15 * (d1 - d2));
    else
        cout << 0;
    return 0;
}