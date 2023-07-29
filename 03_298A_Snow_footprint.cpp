#include <bits/stdc++.h>
using namespace std;
		 
int main(){
		 
  int n, Rcnt = 0, Lcnt = 0;
  cin >> n;
  vector<char>arr(n);
  for(int i=0;i<n;i++){
	cin >> arr[i];
	if(arr[i] == 'R') Rcnt++;
	else if(arr[i] == 'L') Lcnt++;
  }
  int s = -1 , t = -1;
  if(Rcnt && Lcnt == 0){
	for(int i=0;i<n;i++){
		if(arr[i] == 'R'){
			s = i+1;
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(arr[i] == 'R'){
			t = i+2;
			break;
		}
	}
	cout << s << " " << t;
  }else if(Lcnt && Rcnt == 0){
	for(int i=0;i<n;i++){
		if(arr[i] == 'L'){
			t = i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(arr[i] == 'L'){
			s = i+1;
			break;
		}
	}
	cout << s << " " << t;
  }else{
	for(int i=0;i<n;i++){
		if(arr[i] == 'R'){
			s = i+1;
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(arr[i] == 'R'){
			t = i+1;
			break;
		}
	}
	cout << s << " " << t;
  }

  return 0;
} 

// Problem link - https://codeforces.com/contest/298/problem/A