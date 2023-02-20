#include <bits/stdc++.h>
using namespace std;

int n, x;
set<int> s;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << "\n";
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
        cout << (*it) << " ";
    return 0;
}