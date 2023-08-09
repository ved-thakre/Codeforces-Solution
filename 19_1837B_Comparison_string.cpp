#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  vector<int>temp;
  while(t--){
      int n;
      cin >> n;
      string s;
      cin >> s;
      int cnt = 1, maxi = 1;
      for (int i = 0; i < n - 1; i++) {
         if(s[i] == s[i + 1]) cnt ++;
         else cnt = 1;
         maxi = max(maxi, cnt);
      }
      temp.push_back(maxi+1);
  }
  for(auto i: temp) cout << i << endl;
      
  return 0;
}

// Problem link - https://codeforces.com/contest/1837/problem/B