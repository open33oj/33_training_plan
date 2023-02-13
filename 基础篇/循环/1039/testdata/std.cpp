#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, ans;
    cin >> n;
    ans = 1001;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        ans = min(ans, x);
    }
    cout << ans << "\n";
    return 0;
}