#include <bits/stdc++.h>
using namespace std;
const long long MOD = 998'244'353;
long long n, k, ans;
int main()
{
    cin >> n >> k;
    ans = 1;
    for (int i = n; i >= n - k + 1; i--)
        ans = (ans * i) % MOD;
    cout << ans << "\n";
    return 0;
}