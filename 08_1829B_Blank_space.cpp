#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int t;
  cin >> t;
  vector<int>ans;
  while(t--){
    int n;
    cin >> n;
    int arr[101], cnt = 0, maxi = 0;
    for(int i=0;i<n;i++) cin >> arr[i];
    if(arr[0] == 0){
        cnt++;
        maxi = max(maxi, cnt);
    }
    for(int i=1;i<n;i++){
        if(arr[i] == 0 && arr[i-1] != 0) cnt = 1;
        else if(arr[i] == 0 && arr[i-1] == 0)cnt++;
        else cnt = 0;
        maxi = max(maxi, cnt);
    }
    ans.push_back(maxi);
  }
  for(auto i: ans) cout << i << endl;
      
  return 0;
} 

// Problem link - https://codeforces.com/contest/1829/problem/B