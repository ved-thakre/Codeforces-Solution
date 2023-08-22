#include <bits/stdc++.h>
using namespace std;
         
int main() {
  int t;
  cin >> t;
  vector<int> ans;
  while (t--) {
    int a, b, c, d, cnt = 0;
    cin >> a >> b >> c >> d;
    if(b > a) cnt++;
    if(c > a) cnt++;
    if(d > a) cnt++;
    ans.push_back(cnt); // Subtract 1 to get the desired number
  }
  for (auto i : ans) {
    cout << i << endl;
  }
      
  return 0;
} 
