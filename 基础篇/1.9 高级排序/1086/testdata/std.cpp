#include <bits/stdc++.h>
using namespace std;
int n, k, ans;
int a[1123456];
//找到 a[l]~a[r] 的第 k 小（存入 ans）
void quick_sort(int l, int r)
{
    if (l >= r)
    {
        if (l == r && k == 1)
            ans = a[l];
        return;
    }
    // 1. 划分左右
    // 最好随机选取 a[l] ~ a[r] 的某个元素
    // 来确保不被针对，这题数据随机生成的所以不讲究
    int key = a[l];
    int pl, pr;
    pl = l;
    pr = r;
    while (pl < pr)
    {
        //把右边下一个比 key 小的丢在空位
        while (pl < pr && a[pr] >= key)
            pr--;
        a[pl] = a[pr];
        //把左边下一个比 key 大的丢在空位
        while (pl < pr && a[pl] <= key)
            pl++;
        a[pr] = a[pl];
    }
    a[pl] = key; //关键字丢到最终的空位
    // 2. 寻找答案
    int l_cnt = pl - l;
    int r_cnt = r - pl;
    int now = l_cnt + 1; // key 的排名
    if (now == k)
        ans = key;
    else if (now > k)
    {
        //在左边
        quick_sort(l, pl - 1);
    }
    else
    {
        //在右边
        k -= now;
        quick_sort(pl + 1, r);
    }
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    k = n - k + 1; //第 k 大 -> 第 new_k 小
    quick_sort(1, n);
    cout << ans << "\n";
    return 0;
}
