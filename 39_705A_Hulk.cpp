#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int n;
  cin >> n;
  for(int i=1;i<=n;i++){
    if(i==n){
        if(i%2) cout << "I hate it";
        else cout << "I love it";
    }else{
        if(i%2) cout << "I hate that";
        else cout << "I love that";
    }
    if(i!=n) cout << " ";
  }
      
  return 0;
} 

// Problem link - https://codeforces.com/problemset/problem/705/A