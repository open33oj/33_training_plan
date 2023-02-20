#include <bits/stdc++.h>
using namespace std;

int n, q;
vector<int> a[100005];

int main()
{
    cin >> n >> q;
    for (int i = 1; i <= q; i++)
    {
        int op, x, y, k;
        cin >> op;
        if (op == 1)
        {
            cin >> x >> y >> k;
            if (a[x].size() <= y)
                a[x].resize(y + 1);
            a[x][y] = k;
        }
        else if (op == 2)
        {
            cin >> x >> y;
            cout << a[x][y] << "\n";
        }
    }

    return 0;
}