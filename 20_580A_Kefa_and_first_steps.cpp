#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int n, cnt = 1, maxi = 1;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];
  for(int i=0;i<n-1;i++){
    if(arr[i] <= arr[i+1]) cnt++;
    else cnt = 1;
    maxi = max(maxi, cnt);
  }
  cout << maxi;    
  return 0;
}

// Problem link - https://codeforces.com/contest/580/problem/A

