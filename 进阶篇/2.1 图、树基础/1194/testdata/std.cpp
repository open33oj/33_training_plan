#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> e[1005];
int siz[1005];
// 当前子树根节点，当前子树根节点的父节点
void dfs(int u, int fa)
{
    siz[u] = 1;
    // 枚举所有u能连到的点v
    for (int i = 0; i < e[u].size(); i++)
    {
        int v = e[u][i];
        if (v == fa)
            continue; // 忽略父节点方向
        dfs(v, u);
        siz[u] += siz[v];
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
    for (int i = 1; i <= n; i++)
        cout << siz[i] << " ";
    cout << "\n";
    return 0;
}