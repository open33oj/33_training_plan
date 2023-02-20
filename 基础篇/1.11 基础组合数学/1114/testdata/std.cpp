#include <bits/stdc++.h>
using namespace std;
const long long MOD = 998'244'353;
long long inv[1005];
long long n, k, ans;
int main()
{
    inv[1] = 1;
    for (int i = 2; i <= 1000; i++)
        inv[i] = (MOD - MOD / i) * inv[MOD % i] % MOD;

    cin >> n >> k;
    ans = 1;
    for (int i = n; i >= n - k + 1; i--)
        ans = (ans * i) % MOD;
    for (int i = 1; i <= k; i++)
        ans = (ans * inv[i]) % MOD;
    cout << ans << "\n";
    return 0;
}