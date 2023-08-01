#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int q;
  cin >> q;
  vector<int>ans;
  while(q--){
    int n, t, maxi = 0, ind = -1;
    cin >> n >> t;
    vector<vector<int>>v;
    for(int i=0;i<2;i++){
      vector<int>temp(n);
      for(int j=0;j<n;j++){
        cin >> temp[j];
      }
      v.push_back(temp);
    }
    for(int j=0;j<v[0].size();j++){
       if(v[0][j] <= t && v[1][j] > maxi){
          maxi = v[1][j];
          ind = j+1;
       }
       t--;
    }
    ans.push_back(ind);
  }
  for(auto i: ans) cout << i << endl;
      
  return 0;
} 

// Problem link - https://codeforces.com/contest/1822/problem/A