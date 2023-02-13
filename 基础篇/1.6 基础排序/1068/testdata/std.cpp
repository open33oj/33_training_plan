#include <bits/stdc++.h>
using namespace std;
int n, ans;
int a[1005];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ans = 0;
    //最多执行 n-1 轮冒泡
    for (int i = 1; i <= n - 1; i++)
        //执行一轮冒泡操作
        for (int j = 1; j <= n - 1; j++)
            //比较相邻元素
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                ans++; //交换次数计数
            }
    cout << ans;
    return 0;
}