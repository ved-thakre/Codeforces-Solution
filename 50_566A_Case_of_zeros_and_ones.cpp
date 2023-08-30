#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<char> arr(n);
    int zcnt = 0 , ocnt = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == '0')zcnt++;
        else ocnt++;
    }
    cout << n - (2 * min(zcnt,ocnt));
    

    return 0;
}

// Problem link - https://codeforces.com/problemset/problem/556/A
