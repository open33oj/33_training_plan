#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int N = 35, M = 2e4 + 5;
int n, m, v[N], dp[M];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= v[i]; j--)
            dp[j] = max(dp[j], dp[j - v[i]] + v[i]);
    cout << m - dp[m] << endl;
    return 0;
}