#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  vector<int>ans;
  
  while(t--){
      int n, x, cnt = 1;
      cin >> n >> x;
      n -= 2;
      while(n > 0){
         n -= x;
         cnt++;
      }
      ans.push_back(cnt);
  }
  for(auto i: ans) cout << i << endl;
      
  return 0;
} 

// Problem link - https://codeforces.com/contest/1426/problem/A