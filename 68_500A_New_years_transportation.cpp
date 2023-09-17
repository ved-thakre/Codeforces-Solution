#include <bits/stdc++.h>
using namespace std;

int a[1234567];

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    for (int i = 1; i < n; i++)
    {
        scanf("%d", a + i);
    }
    int x = 1;
    while (x < t)
    {
        x += a[x];
    }
    puts(x == t ? "YES" : "NO");
    return 0;
}

// Problem link - https://codeforces.com/problemset/problem/500/A