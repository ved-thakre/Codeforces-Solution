#include <bits/stdc++.h>
using namespace std;
         
int main(){

  int n , m;
  cin >> n >> m;
  vector<int>arr(m);
  priority_queue<int>pq;
  for(int i=0;i<m;i++) cin >> arr[i];
  for(int i=0;i<m;i++) pq.push(arr[i]);

  int mini = 0 , maxi = 0;
  int cnt = 0;
  sort(begin(arr),end(arr));
  for (int i = 0; i < arr.size(); i++) {
      while(arr[i]){
        mini += arr[i];
        cnt++;
        arr[i]--;
        if(cnt == n) break;
      }
      if(cnt == n) break;
  }

  while(n--){
    int temp = pq.top();
    pq.pop();
    maxi += temp;
    if(temp-1 != 0) pq.push(temp-1);
  }

  cout << maxi << " " << mini;
      
  return 0;
} 

// Problem link - https://codeforces.com/contest/218/problem/B