#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // 兔子速度：v1米/秒，领先 t 米或以上就休息 s 秒
    // 乌龟速度：v2米/秒
    // 赛道长度：l 米
    int v1, v2, t, s, l;
    cin >> v1 >> v2 >> t >> s >> l;
    // 当前时间（秒），当前兔子跑了的距离，当前乌龟跑了的距离
    int nowTime, nowR, nowT, resTime;
    nowTime = 0;
    nowR = 0;
    nowT = 0;
    while (nowR < l && nowT < l)
    {
        if (nowR - nowT < t)
        {
            nowR += v1;
            nowT += v2;
            nowTime += 1;
        }
        else
        {
            nowR += 0;
            nowT += v2 * s;
            nowTime += s;
        }
    }
    if (nowR >= l && nowT >= l)
    {
        cout << "D\n";
        cout << nowTime << "\n";
    }
    else if (nowR >= l)
    {
        cout << "R\n";
        cout << nowTime << "\n";
    }
    else if (nowT >= l)
    {
        cout << "T\n";
        cout << l / v2 << "\n";
    }
    return 0;
}
