#include <bits/stdc++.h>
using namespace std;
const int MAXN = 10'000'000;
bool p[MAXN + 1];
//筛出 1~n 中的每个数是否为质数
void get_primes(int n)
{
    //初始化
    p[0] = p[1] = false;
    for (int i = 2; i <= n; i++)
        p[i] = true;
    //筛
    for (int i = 2; i <= n; i++)
        if (p[i])
            for (int j = i + i; j <= n; j += i)
                p[j] = false;
}
int main()
{
    int n;
    cin >> n;
    get_primes(n);
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans += p[i];
    cout << ans << "\n";
    return 0;
}