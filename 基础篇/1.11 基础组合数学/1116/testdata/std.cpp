#include <bits/stdc++.h>
using namespace std;
const long long MOD = 998'244'353;
long long n, k, S[1005][1005];
int main()
{
    cin >> n >> k;
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= i; j++)
            if (j == 0 || j == i)
                S[i][j] = 1;
            else
                S[i][j] = (S[i - 1][j - 1] + j * S[i - 1][j] % MOD) % MOD;
    cout << S[n][k] << "\n";
    return 0;
}