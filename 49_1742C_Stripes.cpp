#include <bits/stdc++.h>
using namespace std;

bool allSamecol(vector<vector<char>>& v, int col, char &ans) {
    if (v[0][col] == 'R' || v[0][col] == 'B') {
        char ch = v[0][col];
        for (int i = 0; i < 8; i++) {
            if (ch != v[i][col]) return false;
        }
        ans = ch;
        return true; // Return true only if the condition is met
    }
    return false; // Return false otherwise
}

bool allSamerow(vector<vector<char>>& v, int row, char &ans) {
    if (v[row][0] == 'R' || v[row][0] == 'B') {
        char ch = v[row][0];
        for (int i = 0; i < 8; i++) {
            if (ch != v[row][i]) return false;
        }
        ans = ch;
        return true; // Return true only if the condition is met
    }
    return false; // Return false otherwise
}
         
int main() {
    int t;
    cin >> t;
    vector<char> res;
    while (t--) {
        char ans;
        vector<vector<char>> v;
        for (int i = 0; i < 8; i++) {
            vector<char> r(8);
            for (int j = 0; j < 8; j++) {
                cin >> r[j];
            }
            v.push_back(r);
        }
        for (int i = 0; i < 8; i++) {
           if (allSamerow(v, i, ans)) {
                res.push_back(ans);
                break;
           } else if (allSamecol(v, i, ans)) {
                res.push_back(ans);
                break;
           }
        }
    }
    for (auto i : res) {
        cout << i << endl; 
    }
      
    return 0;
} 
