#include <bits/stdc++.h>
using namespace std;
         
int main() {
  int t;
  cin >> t;
  vector<int> ans;
  while (t--) {
    int k, cnt = 0;
    cin >> k;
    int i = 1; // Start from the first positive integer
    while (cnt != k) {
      if (i % 3 != 0 && i % 10 != 3) {
        cnt++;
      }
      i++;
    }
    ans.push_back(i - 1); // Subtract 1 to get the desired number
  }
  for (auto i : ans) {
    cout << i << endl;
  }
      
  return 0;
} 
