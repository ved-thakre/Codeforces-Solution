#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;

        string n;
        cin >> n;

        int ans = a / 2;
        stack<char> start;
        int count = 0;

        for (int i = 0; i < n.length(); ++i)
        {
            if (n[i] == '(')
            {
                start.push(n[i]);
            }
            else if (start.empty())
            {
                count++;
            }
            else
            {
                start.pop();
            }
        }

        cout << count << endl;
    }

    return 0;
}

// Problem link -> https://codeforces.com/problemset/problem/1374/C