#include <bits/stdc++.h>
using namespace std;
int n;
int cnt[1005]; // cnt[i] 统计出现了多少个 i
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= cnt[i]; j++)
            cout << i << " ";
    }
    return 0;
}