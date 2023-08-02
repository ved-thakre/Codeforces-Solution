#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int t;
  cin >> t;
  vector<int>ans;
  while(t--){
    int arr[3];
    for(int i=0;i<3;i++) cin >> arr[i];
    sort(arr, arr + 3);
    ans.push_back(arr[1]);
  }
  for(auto i: ans) cout << i << endl;
      
  return 0;
} 

// Problem link - https://codeforces.com/contest/1760/problem/A