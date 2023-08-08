#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  vector<int>temp;
  
  while(t--){
      int n;
      cin >> n;
      vector<int> a(n);
      for (int i = 0; i < n; i++) cin >> a[i];
      int ans = 0;
      for (int i = 0; i < n - 1; i++) {
         if (a[i] > a[i + 1]) {
               ans = max(ans, a[i]);
         }
      }
      temp.push_back(ans);
  }
  for(auto i: temp) cout << i << endl;
      
  return 0;
} 

// Problem link - https://codeforces.com/contest/1856/problem/A