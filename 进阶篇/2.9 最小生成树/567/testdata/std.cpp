#include <bits/stdc++.h>
using namespace std;
int n, m; // n个点 m条边
struct Edge
{
    int u, v, w;
};
Edge e[212345];
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int fa[5005];
int findFa(int x)
{
    if (x == fa[x])
        return x;
    return fa[x] = findFa(fa[x]);
}
vector<pair<int, int>> ans;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> e[i].u >> e[i].v >> e[i].w;
    // 排序
    sort(e + 1, e + m + 1, cmp);
    // 并查集初始化
    for (int i = 1; i <= n; i++)
        fa[i] = i;
    // kruskal/避开环
    int cnt = 0;
    int sum = 0;
    for (int i = 1; i <= m; i++)
    {
        // e[i].u <-> e[i].v : e[i].w
        // 如果会构成环，就不选，否则就选
        int faU = findFa(e[i].u);
        int faV = findFa(e[i].v);
        if (faU != faV)
        {
            ans.push_back(make_pair(e[i].u, e[i].v));
            fa[faU] = faV;
            cnt++;
            sum += e[i].w;
        }
    }
    if (cnt != n - 1)
        cout << "-1\n";
    else
    {
        cout << sum << "\n";
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i].first << " " << ans[i].second << "\n";
    }
    return 0;
}
