#include <bits/stdc++.h>
using namespace std;
// a^b (mod p)
long long quick_pow(long long a, long long b, long long p)
{
    long long res = 1;
    while (b)
    {
        if (b & 1)
            res = (res * a) % p;
        b = b >> 1;
        a = (a * a) % p;
    }
    return res;
}
int main()
{
    long long a, b, p;
    cin >> a >> b >> p;
    long long ans = quick_pow(a, b, p);
    cout << a << "^" << b << " mod " << p << "=" << ans;
    return 0;
}