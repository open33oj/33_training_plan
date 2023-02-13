#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool flag;
    cin >> n;
    flag = (n > 1);
    for (int i = 2; i <= n - 1; i++)
        if (n % i == 0)
            flag = false;
    if (flag)
        cout << "YE5\n";
    else
        cout << "N0\n";
    return 0;
}