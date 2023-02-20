#include <bits/stdc++.h>
using namespace std;
long long n;
bool is_prime(long long x)
{
    if (x < 2)
        return false;
    for (long long i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    cin >> n;
    if (is_prime(n))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}