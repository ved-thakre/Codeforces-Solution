#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int t;
  cin >> t;
  vector<string>res;
  while(t--){
    int a1, b1, a2, b2, am , bm, ax, bx;
    cin >> a1 >> b1;
    cin >> a2 >> b2;
    am = min(a1, b1);
    ax = max(a1, b1);
    bx = max(a2, b2);
    bm = min(a2, b2);
    if(am + bm == ax && am + bm == bx) res.push_back("Yes");
    else res.push_back("No");
  }
  for(auto i: res) cout << i << endl;
      
  return 0;
} 

// Problem link - https://codeforces.com/problemset/problem/1351/B