#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> e[1005];
bool vis[1005];
// 返回 u 出发走没走过的点能到的编号最大的点
int dfs(int u)
{
    int res = u;
    // 枚举所有u能连到的点v
    for (int i = 0; i < e[u].size(); i++)
    {
        int v = e[u][i];
        if (vis[v] == true)
            continue;
        vis[v] = true;
        res = max(res, dfs(v));
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        e[u].push_back(v);
    }
    memset(vis, false, sizeof(vis));
    vis[1] = true;
    cout << dfs(1) << "\n";
    return 0;
}