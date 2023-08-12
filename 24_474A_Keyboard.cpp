#include <bits/stdc++.h>
using namespace std;
         
int main(){
  char Dir;
  cin >> Dir;
  vector<string>v = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"} ;      
  string s, ans = "";
  cin >> s;
  
  int ind = 0;
  while(ind < s.size()){
      for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
          if(s[ind] == v[i][j]){
            if(Dir == 'R') ans += v[i][j-1];
            else ans += v[i][j+1];
            ind++;
            break;
          }
        }
        if(ind == s.size())break;
      }
  }
  cout << ans;
  
  return 0;
} 

// Problem link - https://codeforces.com/problemset/problem/474/A