#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int a, b, c , maxiadd = 0 , maxiprod = 0;
  cin >> a >> b >> c;
  
  maxiadd = max((a*(b+c)),  (c*(a+b)));
  maxiprod = a*b*c;

  cout << max(maxiprod, max(maxiadd, a+b+c));

  return 0;
} 


// Problem link - https://codeforces.com/problemset/problem/479/A