#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int t;
  cin >> t;
  vector<int>ans;
  string pi = "314159265358979323846264338327";
  while(t--){
    string s;
    cin >> s;
    int i;
    for(i=0;i<s.size();i++){
      if(s[i] == pi[i]) continue;
      else break;
    }
    ans.push_back(i);
  }
  for(auto i: ans) cout << i << endl;    
  return 0;
} 

// Problem link - https://codeforces.com/contest/1790/problem/A
