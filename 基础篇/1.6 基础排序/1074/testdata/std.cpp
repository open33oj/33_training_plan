#include <bits/stdc++.h>
using namespace std;
int n;
struct Stu
{
    int a, b, id;
};
Stu arr[1005];
bool needSwap(Stu x, Stu y)
{
    return x.a > y.a ||
           x.a == y.a && x.b > y.b ||
           x.a == y.a && x.b == y.b && x.id > y.id;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i].a >> arr[i].b;
        arr[i].id = i;
    }
    //用选择排序进行多关键字排序
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (needSwap(arr[i], arr[j]))
                swap(arr[i], arr[j]);
    for (int i = 1; i <= n; i++)
        cout << arr[i].id << " ";
    return 0;
}