#include <bits/stdc++.h>
using namespace std;
         
int main(){ 
  int n, a = 2;
  cin >> n;
  bool f = true;
  string s, res = "" , ed = "";
  cin >> s;
  for(int i=n-1;i>=0;i--){
    if(f) res += s[i];
    else ed += s[i];
    f = !f;
  }
  reverse(begin(res),end(res));
  cout << ed+res;
      
  return 0;
} 

// Problem link - https://codeforces.com/contest/746/problem/B