#include <bits/stdc++.h>
using namespace std;
int n, m, x, y;
int a[21234];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> m;
    for (int t = 1; t <= m; t++)
    {
        cin >> x >> y;
        for (int i = n; i >= x + 1; i--)
            a[i + 1] = a[i];
        a[x + 1] = y;
        n++;
    }
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}