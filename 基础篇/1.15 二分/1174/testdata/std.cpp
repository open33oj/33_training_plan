#include <bits/stdc++.h>
using namespace std;
int n, q, x;
int a[1123456];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    while (q--)
    {
        cin >> x;
        int pos = lower_bound(a + 1, a + n + 1, x) - a;
        cout << a[pos] << "\n";
    }
    return 0;
}