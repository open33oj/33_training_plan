#include <bits/stdc++.h>
using namespace std;
int n;
int a[105];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        //把 i 插入到有序的 a[1]~a[i-1] 的合适位置
        for (int j = i; j >= 2; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
            else
                break;
        //输出这一轮插入后的结果
        for (int j = 1; j <= n; j++)
            cout << a[j] << " ";
        cout << "\n";
    }
    return 0;
}