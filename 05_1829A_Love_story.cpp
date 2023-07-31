#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int t ;
  cin >> t;
  string str = "codeforces";
  vector<int>ans;
  while(t--){
    string s;
    cin >> s;
    int i = 0, j=0 , cnt = 0;
    while(i<10){
       if(s[i++] != str[j++]) cnt++;
    }
    ans.push_back(cnt);
  }
  for(auto i: ans) cout << i << endl;
      
  return 0;
} 

// Problem link - 