#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int n, k;
  cin >> n >> k;
  map<char,int>mp;
  string s;
  cin >> s;
  for(int i=0;i<n;i++)mp[s[i]]++;
  for(auto i: mp){
    if(i.second > k){
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
      
  return 0;
} 

// Problem link - https://codeforces.com/contest/841/problem/A