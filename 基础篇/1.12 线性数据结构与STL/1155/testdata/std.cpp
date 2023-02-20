#include <bits/stdc++.h>
using namespace std;

int n, m;
int nxt[105], pre[105];
void del(int x)
{
    pre[nxt[x]] = pre[x];
    nxt[pre[x]] = nxt[x];
}
int main()
{
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
    {
        nxt[i] = i + 1;
        pre[i] = i - 1;
    }
    pre[1] = n;
    nxt[n] = 1;

    int now = n; //从 n 开始就可以不停做“往后数 m 个数，删掉当前数”了。
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            now = nxt[now];
        cout << now << " ";
        del(now);
    }

    return 0;
}