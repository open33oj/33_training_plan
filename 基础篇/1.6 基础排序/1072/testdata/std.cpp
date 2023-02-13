#include <bits/stdc++.h>
using namespace std;
int n;
int a[1005];
int b[1005];
bool cmp(int x, int y)
{
    return a[x] < a[y];
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = i;
    }
    //用选择排序对下标排序
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (!cmp(b[i], b[j]))
                swap(b[i], b[j]);
    for (int i = 1; i <= n; i++)
        cout << b[i] << " ";
    return 0;
}