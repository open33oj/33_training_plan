#include <bits/stdc++.h>
using namespace std;
int n;
int a[1123456];
//在数组 a 上维护大根堆
int len; //堆的大小 a[1]~a[len]
void up(int pos)
{
    int fa = pos / 2;
    if (pos == 1 || a[pos] < a[fa])
        return;
    swap(a[pos], a[fa]);
    up(fa);
}
void down(int pos)
{
    int lson = pos * 2;
    int rson = pos * 2 + 1;
    if (lson > len)
        return;
    int best = pos;
    if (lson <= len && a[lson] > a[best])
        best = lson;
    if (rson <= len && a[rson] > a[best])
        best = rson;
    if (best == pos)
        return;
    swap(a[pos], a[best]);
    down(best);
}
int main()
{
    cin >> n;
    len = 0;
    for (int i = 1; i <= n; i++)
    {
        int op, x;
        cin >> op >> x;
        if (op == 1)
        {
            //下面两行可以压成一行 a[++len] = x;
            len++;
            a[len] = x;
            up(len);
        }
        else if (op == 2)
        {
            cout << a[1] << "\n";
        }
        else if (op == 3)
        {
            swap(a[1], a[len]);
            len--;
            down(1);
        }
    }
    return 0;
}
