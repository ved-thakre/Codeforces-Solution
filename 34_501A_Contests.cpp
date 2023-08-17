#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int n, sum = 0, cnt = 0;
  cin >> n ;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
    sum += arr[i];
  }
  for(int i=0;i<n;i++)if((sum - arr[i])%2==0) cnt++;

  cout << cnt;
      
  return 0;
} 

// Problem link - https://codeforces.com/problemset/problem/129/A