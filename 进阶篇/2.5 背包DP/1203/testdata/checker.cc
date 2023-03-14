#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
vector<int> cho;
int v[35], w[35];
int main(int argc, char *argv[])
{
    setName("compares two signed integers");
    registerTestlibCmd(argc, argv);
    int ansW = ans.readInt();
    int maxW = ouf.readInt();
    if (ansW != maxW)
        quitf(_wa, "expected %d, found %d", ansW, maxW);
    int m = inf.readInt();
    int n = inf.readInt();
    int x = ouf.readInt();
    if (x < 0 || x > n)
        quitf(_wa, "wrong x(%d)", x);
    for (int i = 0; i < x; i++)
    {
        int now = ouf.readInt();
        cho.push_back(now);
    }
    sort(cho.begin(), cho.end());
    for (int i = 1; i <= n; i++)
    {
        v[i] = inf.readInt();
        w[i] = inf.readInt();
    }
    int sumV = 0;
    int sumW = 0;
    for (int i = 0; i < x; i++)
    {
        if (i > 0 && cho[i] == cho[i - 1])
            quitf(_wa, "plan error(same)");
        sumV += v[cho[i]];
        sumW += w[cho[i]];
    }
    if (sumV > m)
        quitf(_wa, "plan error(need more space)");
    if (sumW != ansW)
        quitf(_wa, "plan error(wrong plan)");
    quitf(_ok, "good!");
}