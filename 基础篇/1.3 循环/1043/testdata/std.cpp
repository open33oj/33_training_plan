#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt;
    cin >> n;
    cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        bool flag = true;
        for (int j = 2; j < i; j++)
            if (i % j == 0)
                flag = false;
        cnt += flag;
    }
    cout << cnt << "\n";
    return 0;
}