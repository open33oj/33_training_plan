#include <bits/stdc++.h>
using namespace std;
int n;
int a[1123456];
int ans;        // <--- 求逆序对相关操作
int t[1123456]; //临时辅助数组
//将有序的 a[l] ~ a[mid] 及有序的 a[mid+1] ~ a[r] 有序合并
void merge_array(int l, int r)
{
    // 1. 有序放入临时数组
    int mid = (l + r) / 2;
    int pl, pr, pt;
    pl = l;       // l ~ mid
    pr = mid + 1; // mid+1 ~ r
    pt = l;       // l~r
    //两边都还有元素
    while (pl <= mid && pr <= r)
    {
        if (a[pl] <= a[pr])
        {
            // 可简写为 t[pt++] = a[pl++];
            t[pt] = a[pl];
            pt++;
            pl++;
        }
        else
        {
            ans += mid - pl + 1; // <---
            t[pt] = a[pr];
            pt++;
            pr++;
        }
    }
    //只有一边有元素
    while (pl <= mid)
    {
        t[pt] = a[pl];
        pt++;
        pl++;
    }
    while (pr <= r)
    {
        t[pt] = a[pr];
        pt++;
        pr++;
    }
    // 2. 从临时数组覆盖回来
    for (int i = l; i <= r; i++)
        a[i] = t[i];
}
//对 a[l] ~ a[r] 排序
void merge_sort(int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    merge_sort(l, mid);     //对左半边排序
    merge_sort(mid + 1, r); //对右半边排序
    merge_array(l, r);      //将有序的左右合并
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ans = 0; // <---
    merge_sort(1, n);
    cout << ans << "\n"; // <---
    return 0;
}
