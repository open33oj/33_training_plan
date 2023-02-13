#include <bits/stdc++.h>
using namespace std;
int n;
int a[1005];
int b[1005];
bool cmp(int x, int y)
{
    return a[x] <= a[y];
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = i;
    }
    //用冒泡排序对下标排序
    for (int i = 1; i <= n - 1; i++)
        for (int j = 1; j <= n - 1; j++)
            if (!cmp(b[j], b[j + 1]))
            {
                swap(b[j], b[j + 1]);
            }
    for (int i = 1; i <= n; i++)
        cout << b[i] << " ";
    return 0;
}