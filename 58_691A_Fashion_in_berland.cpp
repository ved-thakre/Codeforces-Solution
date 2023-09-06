#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n, sum = 0;
        cin >> n;
        int arr[1001];
        for (int i = 0; i < n; i++)
        {
                cin >> arr[i];
                sum += arr[i];
        }

        if ((sum == n - 1 && n != 1) || (n == 1 && arr[0] == 1))
                cout << "YES";
        else
                cout << "NO";

        return 0;
}

// Problem link - https://codeforces.com/problemset/problem/691/A