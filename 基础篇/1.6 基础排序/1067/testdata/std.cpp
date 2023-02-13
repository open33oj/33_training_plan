#include <bits/stdc++.h>
using namespace std;
int n;
int a[1005];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int now = 1;
    while (now != n)
    {
        if (a[now + 1] >= a[now])
            now++;
        else
        {
            swap(a[now + 1], a[now]);
            now--;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}