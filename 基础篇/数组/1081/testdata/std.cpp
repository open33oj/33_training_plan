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
        cin >> x;
        for (int i = x + 1; i <= n; i++)
            a[i - 1] = a[i];
        n--;
    }
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}