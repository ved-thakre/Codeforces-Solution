#include <bits/stdc++.h>
using namespace std;

int main(){
		 
  int n,x, a1 = 0, b1=0;
  cin >> n;
  cin >> x;
  vector<int>s;
  bool flag = true, ans = true;
  for(int i=0;i<n;i++){
	int a, b;
	cin >> a >> b;
	if(flag){
	    a1 = a;
		b1 = b;
		flag = false;
	}
	if(a != a1 && a != 7-a1 && a!= b1 && a != 7-b1) ans = false;
	if(b != a1 && b != 7-a1 && b != b1 && b != 7-b1) ans = false;
  }
  if(ans) cout << "YES";
  else cout << "NO";
	  
  return 0;
} 

// problem link - https://codeforces.com/contest/225/problem/A