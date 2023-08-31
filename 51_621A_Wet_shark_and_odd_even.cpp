#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int n;
  cin >> n;
  vector<int>arr(n);
  long long sum = 0;
  for(int i=0;i<n;i++){
    cin >> arr[i];
    sum += arr[i];
  }
  sort(begin(arr), end(arr));
  for(int i=0;i<n;i++){
    if(sum%2==1){
        if(arr[i]%2){
            sum -= arr[i];
            break;
        }
    }else{
        break;
    }
  }
  cout << sum;
      
  return 0;
} 

// Problem link - https://codeforces.com/problemset/problem/621/A