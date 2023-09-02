
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    string sa = to_string(a);
    string sb = to_string(b);
    string si = to_string(a + b);

    string na = "", nb = "", ni = "";

    for (int i = 0; i < sa.size(); i++) {
        if (sa[i] != '0') na += sa[i];
    }

    for (int i = 0; i < si.size(); i++) {
        if (si[i] != '0') ni += si[i];
    }

    for (int i = 0; i < sb.size(); i++) {
        if (sb[i] != '0') nb += sb[i];
    }

    if (stoi(na) + stoi(nb) == stoi(ni)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
