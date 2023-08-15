#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int t;
  cin >> t;
  vector<int>res;
  while(t--){
    int l, r, maxi = -1, ans = -1;
    cin >> l >> r;
    for(int i=l;i<=r;i++){
      string temp = to_string(i);
      sort(begin(temp), end(temp));
      int a = temp[0] - '0', b = temp[temp.size()-1] - '0';
      if(b-a > maxi){
        maxi = b-a;
        ans = i;
      }
      if(maxi == 9) break;
    }
    res.push_back(ans);
  }
  for(auto i: res) cout << i << endl;
      
  return 0;
} 

// Problem link - https://codeforces.com/contest/1808/problem/A