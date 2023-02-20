#include <bits/stdc++.h>
using namespace std;
int n;
int op, x;
stack<int> s;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> op >> x;
        if (op == 1)
        {
            s.push(x);
        }
        else if (op == 2)
        {
            if (s.size() > 0)
                cout << s.top() << "\n";
            else
                cout << -1 << "\n";
        }
        else if (op == 3)
        {
            if (!s.empty())
                s.pop();
        }
    }
    return 0;
}