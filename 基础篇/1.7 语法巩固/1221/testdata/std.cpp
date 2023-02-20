#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int m, k, now, cnt, ans;
    cin >> m >> k;
    now = m; // 当前钱数
    cnt = 0; // 已经花了的钱数
    ans = 0; // 答案天数
    while (now > 0)
    {
        now--;
        cnt++;
        ans++;
        if (cnt % k == 0)
            now++;
    }
    cout << ans << "\n";
    return 0;
}