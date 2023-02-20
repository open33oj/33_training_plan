#include <bits/stdc++.h>
using namespace std;
const long long MOD = 998'244'353;
long long n, H[1005];
int main()
{
    cin >> n;
    H[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        H[i] = 0;
        for (int j = 1; j <= i; j++)
            H[i] = (H[i] + H[j - 1] * H[i - j] % MOD) % MOD;
    }
    cout << H[n] << "\n";
    return 0;
}