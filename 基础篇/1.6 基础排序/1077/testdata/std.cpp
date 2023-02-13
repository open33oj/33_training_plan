#include <bits/stdc++.h>
using namespace std;
int n;
string a[1005];
bool cmp(string x, string y)
{
    if (x.length() != y.length())
        return x.length() < y.length();
    return x < y;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}