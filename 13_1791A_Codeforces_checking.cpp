#include <bits/stdc++.h>
using namespace std;
         
int main(){
  int t;
  cin >> t;
  vector<string>ans;
  while(t--){
    char s;
    cin >> s;
    if(s != 'c' && s != 'o' && s != 'd'  && s != 'e' && s != 'f' && s != 'o' && s != 'r' && s != 's') ans.push_back("NO");
    else ans.push_back("YES");
    
  }
  for(auto i: ans) cout << i << endl;    
  
  return 0;
} 

// Problem link - https://codeforces.com/contest/1791/problem/A
