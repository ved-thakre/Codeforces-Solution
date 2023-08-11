#include <iostream>
using namespace std;
         
int main(){
         
  int n, m, cnt = 1;
  cin >> n >> m;
  while(true){
    if(cnt%m==0)n++;
    if(cnt >= n) break;
    cnt++;
  }
  cout << cnt;
  
  return 0;
} 

// Problem link - https://codeforces.com/problemset/problem/460/A