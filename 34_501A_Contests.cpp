#include <bits/stdc++.h>
using namespace std;
         
int main(){
  
  int a, b, c, d, misha = 0, vasya = 0;
  cin >> a >> b >> c >> d;
  misha = max(((3*a)/10), (a-((a/250)*c)));
  vasya = max(((3*b)/10), (b-((b/250)*d)));
  if(vasya < misha) cout <<"Misha";
  else if(misha < vasya) cout << "Vasya";
  else cout << "Tie";
      
  return 0;
}

// Problem link - https://codeforces.com/problemset/problem/129/A