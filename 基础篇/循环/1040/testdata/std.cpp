#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, maxx, minn;
    cin >> n;
    maxx = 0;
    minn = 1001;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        maxx = max(maxx, x);
        minn = min(minn, x);
    }
    cout << maxx - minn << "\n";
    return 0;
}