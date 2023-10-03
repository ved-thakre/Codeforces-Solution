#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int main()
{
    ios;
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("/Users/sreejith/Desktop/output.txt", "w", stdout);
#endif
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0, sum2 = 0;
        cin >> n;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
            sum2 += b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ll mini = min((a[0] * n) + sum2, (b[0] * n) + sum);
        cout << mini;

        cout << endl;
    }
    return 0;
}
