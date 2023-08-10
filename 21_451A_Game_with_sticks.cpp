#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int n, m;
  cin >> n >> m;
  int c = n>m?m:n;
  if((m == n && m%2) || c%2){
    cout << "Akshat";
  }else{
    cout << "Malvika";
  } 
  return 0;
} 

// Problem link - https://codeforces.com/problemset/problem/451/A