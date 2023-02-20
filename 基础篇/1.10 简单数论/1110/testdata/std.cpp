#include <bits/stdc++.h>
using namespace std;
long long n, p;
long long inv[3123456];
int main()
{
    cin >> n >> p;
    inv[1] = 1;
    cout << inv[1] << "\n";
    for (int i = 2; i <= n; i++)
    {
        inv[i] = (p - p / i) * inv[p % i] % p;
        cout << inv[i] << "\n";
    }
    return 0;
}