#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int n, c1 = 0, c2 = 0, c3 = 0;
  cin >> n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin >> v[i];
    if(v[i] == 1) c1++;
    else if(v[i] == 2) c2++;
    else c3++;
  }
  int maxi = max(c1, max(c2,c3));
  cout << (c1+c2+c3) - maxi;
        
  return 0;
} 

// Problem link - https://codeforces.com/problemset/problem/52/A