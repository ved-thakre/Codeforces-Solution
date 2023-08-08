#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  vector<string>temp;
  
  while(t--){
      int n, cnt1 = 0;
      long long sum_a = 0;
      cin >> n;
      vector<int> a(n);
      for (int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 1) cnt1++;
        sum_a += a[i];
      }
      int ans = 0;
      for (int i = 0; i < n - 1; i++) {
         if (a[i] > a[i + 1]) {
               ans = max(ans, a[i]);
         }
      }
      if (sum_a >= cnt1 + n && n > 1) {
        temp.push_back("YES");
    } else {
        temp.push_back("NO");
    }
      
  }
  for(auto i: temp) cout << i << endl;
      
  return 0;
} 

// Problem link - https://codeforces.com/contest/1856/problem/B