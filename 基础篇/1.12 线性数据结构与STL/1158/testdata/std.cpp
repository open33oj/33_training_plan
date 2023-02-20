#include <bits/stdc++.h>
using namespace std;
int n;
int op, x;
deque<int> q;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> op >> x;
        if (op == 1)
        {
            q.push_front(x);
        }
        else if (op == 2)
        {
            q.push_back(x);
        }
        else if (op == 3)
        {
            if (q.size() > 0)
                cout << q.front() << "\n";
            else
                cout << -1 << "\n";
        }
        else if (op == 4)
        {
            if (q.size() > 0)
                cout << q.back() << "\n";
            else
                cout << -1 << "\n";
        }
        else if (op == 5)
        {
            if (!q.empty())
                q.pop_front();
        }
        else if (op == 6)
        {
            if (!q.empty())
                q.pop_back();
        }
    }
    return 0;
}
