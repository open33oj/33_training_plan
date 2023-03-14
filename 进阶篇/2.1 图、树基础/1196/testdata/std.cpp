#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> e[1005];
int siz[1005];    // 以1为根节点时，子树i的大小
int maxSiz[1005]; // 子树i中的最大子树大小
// 当前子树根节点，当前子树根节点的父节点
void dfs(int u, int fa)
{
    siz[u] = 1;
    maxSiz[u] = 0;
    // 枚举所有u能连到的点v
    for (int i = 0; i < e[u].size(); i++)
    {
        int v = e[u][i];
        if (v == fa)
            continue; // 忽略父节点方向
        dfs(v, u);
        siz[u] += siz[v];
        maxSiz[u] = max(maxSiz[u], siz[v]);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        e[u].push_back(v);
        e[v].push_back(u);
    }
    dfs(1, 0);
    int ans = 1;               // 最优点
    int ansMaxSiz = maxSiz[1]; // 以最优点作为根时的最大子树大小
    for (int i = 1; i <= n; i++)
    {
        int nowMaxSiz; // 以i为根时的最大子树大小
        nowMaxSiz = max(maxSiz[i], n - siz[i]);
        if (nowMaxSiz < ansMaxSiz)
        {
            ans = i;
            ansMaxSiz = nowMaxSiz;
        }
    }
    cout << ans << "\n";
    return 0;
}