#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int n, k, maxi = INT_MIN , temp = 0;
  cin >> n >> k;
  for(int i=0;i<n;i++){
    int fi, ti;
    cin >> fi >> ti;
    if(ti > k) temp = (fi - (ti -k));
    else temp = fi;
    maxi = max(maxi, temp);
  }
  cout << maxi;
      
  return 0;
} 

// Problem link - https://codeforces.com/contest/276/problem/A