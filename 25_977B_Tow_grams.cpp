#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int n, maxi = -1;
  cin >> n;
  string s, ans = "";
  cin >> s;
  map<string, int>mp;
  for(int i=0;i<n-1;i++){
    string temp = "";
    temp += s[i];
    temp += s[i+1];
    mp[temp]++;
  }
  for(auto i: mp){
    if(i.second > maxi){
      maxi = i.second;
      ans = i.first;
    }
  }
  cout << ans;
  return 0;
} 

// Problem link - https://codeforces.com/problemset/problem/977/B