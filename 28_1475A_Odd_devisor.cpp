#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int t;
  cin >> t;
  vector<string>ans;
  while(t--){
    long long n;
    cin >> n;
    if(n%2) ans.push_back("YES");
    else{
      while(true){
        n = n/2;
        if(n%2 && n > 1){
          ans.push_back("YES");
          break;
        }else if(n == 0){
          ans.push_back("NO");
          break;
        }
      }
    }
  }
  for(auto i: ans) cout << i << endl;
      
  return 0;
} 

// Problem link - https://codeforces.com/contest/1475/problem/A