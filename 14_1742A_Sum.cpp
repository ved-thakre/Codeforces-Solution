#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> arr(t);

    for (int i = 0; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c || a + c == b || b + c == a)
            arr[i] = "YES";
        else
            arr[i] = "NO";
    }

    for (int i = 0; i < t; i++)
        cout << arr[i] << endl;

    return 0;
}

// Problem link - https://codeforces.com/contest/1742/problem/A