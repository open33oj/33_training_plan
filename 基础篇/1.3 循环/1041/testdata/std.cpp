#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, cnt;
    cin >> n;
    cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x % 2 == 1)
            cnt++;
    }
    cout << cnt << "\n";
    return 0;
}