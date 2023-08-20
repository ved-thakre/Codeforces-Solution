#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int n;
  cin >> n;
  set<pair<string, string>>s;
  for(int i=0;i<n;i++){
    pair<string, string>p;
    cin >> p.first >> p.second;
    s.insert(p);
  }
  cout << s.size();
      
  return 0;
} 

// Problem link - https://codeforces.com/problemset/problem/44/A