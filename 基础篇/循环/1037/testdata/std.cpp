#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, ans;
    cin >> n;
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        ans += x;
    }
    cout << ans << "\n";
    return 0;
}