#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 4 == 74 || n % 44 == 0 || n % 77 == 0 || n % 444 == 0 || n % 447 == 0 || n % 474 == 0 || n % 477 == 0 || n % 744 == 0 || n % 747 == 0 || n % 777 == 0)
        cout << "YES";
    else
    {
        string s = to_string(n);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '4' && s[i] != '7')
            {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }

    return 0;
}

// Problem link - https://codeforces.com/problemset/problem/122/A
