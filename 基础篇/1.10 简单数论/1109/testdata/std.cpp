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
//求 x 在模 p 意义下的逆元（要求 p 是一个质数）
long long inv(long long x, long long p)
{
    return quick_pow(x, p - 2, p);
}
int main()
{
    long long n, p;
    cin >> n >> p;
    for (long long i = 1; i <= n; i++)
        cout << inv(i, p) << "\n";
    return 0;
}