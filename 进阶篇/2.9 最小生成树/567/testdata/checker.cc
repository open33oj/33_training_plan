#include "testlib.h"

int e[105][105];
int fa[105];
int findFa(int x)
{
    if (x == fa[x])
        return x;
    return fa[x] = findFa(fa[x]);
}
int main(int argc, char *argv[])
{
    setName("33");
    registerTestlibCmd(argc, argv);
    int n = inf.readInt();
    for (int i = 1; i <= n; i++)
    {
        fa[i] = i;
        for (int j = 1; j <= n; j++)
            e[i][j] = -1;
    }
    int m = inf.readInt();
    for (int i = 1; i <= m; i++)
    {
        int u = inf.readInt();
        int v = inf.readInt();
        int w = inf.readInt();
        if (e[u][v] == -1 || w < e[u][v])
            e[u][v] = e[v][u] = w;
    }
    int aans = ans.readInt();
    int oans = ouf.readInt();
    if (aans != oans)
        quitf(_wa, "expected %d, found %d", aans, oans);
    if (aans == -1)
        quitf(_ok, "ok!");
    int sum = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        int u = ouf.readInt();
        int v = ouf.readInt();
        int faU = findFa(u);
        int faV = findFa(v);
        if (faU == faV)
            quitf(_wa, "bad plan");
        fa[faU] = faV;
        sum += e[u][v];
    }
    if (aans != sum)
        quitf(_wa, "bad plan expected %d, found %d", aans, sum);
    quitf(_ok, "ok!");
}