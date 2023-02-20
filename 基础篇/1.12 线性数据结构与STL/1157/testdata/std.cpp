#include <bits/stdc++.h>
using namespace std;
int n;
int op, x;
queue<int> q;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> op >> x;
        if (op == 1)
        {
            q.push(x);
        }
        else if (op == 2)
        {
            if (q.size() > 0)
                cout << q.front() << "\n";
            else
                cout << -1 << "\n";
        }
        else if (op == 3)
        {
            if (!q.empty())
                q.pop();
        }
    }
    return 0;
}