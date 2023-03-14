#include <bits/stdc++.h>
using namespace std;
int n;
struct Edge
{
    int v, w;
};
vector<Edge> e[1005];
int dis[1005];
// 当前子树根节点，当前子树根节点的父节点
void dfs(int u, int fa)
{
    // 枚举所有u能连到的点v
    for (int i = 0; i < e[u].size(); i++)
    {
        int v = e[u][i].v;
        int w = e[u][i].w;
        if (v == fa)
            continue; // 忽略父节点方向
        dis[v] = dis[u] + w;
        dfs(v, u);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n - 1; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        e[u].push_back((Edge){v, w});
        e[v].push_back((Edge){u, w});
    }
    dis[1] = 0;
    dfs(1, 0);
    for (int i = 1; i <= n; i++)
        cout << dis[i] << " ";
    cout << "\n";
    return 0;
}