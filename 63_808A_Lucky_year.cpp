#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, ans = 0;
    cin >> n;
    long long a = 1;
    while (a <= n)
    {
        a *= 10;
    }
    a /= 10;
    long long b = a;
    while (b <= n)
    {
        b += a;
    }
    ans = b - n;

    cout << ans << endl;
    return 0;
}

