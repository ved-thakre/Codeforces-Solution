#include <bits/stdc++.h>
using namespace std;
         
int main(){
  int t;
  cin >> t;
  vector<string>ans;
  while(t--){
    string s;
    cin >> s;
    int cnt = 0;
    while(s.size()>=2){
      bool flag = false;
      for(int i=0;i<s.size()-1;i++){
        if(s[i] != s[i+1]){
          s[i] = '.';
          s[i+1] = '.';
          cnt++;
          flag = true;
          break;
        }
      }
      if(flag == false) break;
      string temp = "";
      for(int i=0;i<s.size();i++){
        if(s[i] != '.') temp += s[i];
      }
      s = temp;
    }
    if(cnt%2) ans.push_back("DA");
    else ans.push_back("NET");
  }
  for(auto i: ans) cout << i << endl;      
  return 0;
} 

// Problem link - https://codeforces.com/contest/1373/problem/B