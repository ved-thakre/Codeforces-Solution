#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int t;
  cin >> t;
  vector<int>ans;
  while(t--){
    int n, maxi= -1;
    cin >> n;
    char arr[n];
    for(int i=0;i<n;i++){
      cin >> arr[i];
      maxi = max(maxi, arr[i] - 'a' + 1 );
    }
    ans.push_back(maxi);
  }
  for(auto i: ans) cout << i << endl;    
  
  return 0;
} 

// Problem link - https://codeforces.com/contest/1760/problem/B
