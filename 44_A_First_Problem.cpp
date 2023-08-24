#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int t;
  cin >> t;
  vector<string>ans;
  while(t--){
    int n, m;
    cin >> n >> m;
    vector<vector<char>>v;
    for (int i = 0; i < n; ++i) {
       vector<char>ch;
        for (int j = 0; j < m; ++j) {
            char c;
            cin >> c;
            ch.push_back(c);
        }
        v.push_back(ch);
    }
    if(m<4){
      ans.push_back("NO");
    }else{
      string name = "vika";
      int col = 0;
      int ind = 0;
      while (col < m) {
          bool flag = false;
          for (int i = 0; i < n; i++) {
              if (i < n && v[i][col] == name[ind]) {
                  col++;
                  ind++;
                  flag = true;
                  break;
              }
          }
          if (!flag) col++;
      }
      if(ind == name.size()) ans.push_back("YES");
      else ans.push_back("NO");
    }
  }
  for(auto i : ans) cout << i << endl;
      
  return 0;
} 