#include <bits/stdc++.h>
using namespace std;
 
bool isSqure(vector<vector<char>>&v, int row, int col){
	v[row][col] = '#';
	for(int i=0;i<4-1;i++){
		if(v[i][0] == '#' && v[i][1] == '#' && v[i+1][0] == '#' && v[i+1][1] == '#') return true;
		else if(v[i][1] == '#' && v[i][2] == '#' && v[i+1][1] == '#' && v[i+1][2] == '#') return true;
		else if(v[i][2] == '#' && v[i][3] == '#' && v[i+1][2] == '#' && v[i+1][3] == '#') return true;
	}
	v[row][col] = '.';
	return false;
}
bool isSqure2(vector<vector<char>>&v, int row, int col){
	v[row][col] = '.';
	for(int i=0;i<4-1;i++){
		if(v[i][0] == '.' && v[i][1] == '.' && v[i+1][0] == '.' && v[i+1][1] == '.') return true;
		else if(v[i][1] == '.' && v[i][2] == '.' && v[i+1][1] == '.' && v[i+1][2] == '.') return true;
		else if(v[i][2] == '.' && v[i][3] == '.' && v[i+1][2] == '.' && v[i+1][3] == '.') return true;
	}
	v[row][col] = '#';
	return false;
}
		 
int main(){
		 
  vector<vector<char>> v(4, vector<char>(4, '.'));
  for(int i=0;i<4;i++){
	for(int j=0;j<4;j++){
		cin >> v[i][j];
	}
  }
 
  for(int i=0;i<4-1;i++){
		if(v[i][0] == '#' && v[i][1] == '#' && v[i+1][0] == '#' && v[i+1][1] == '#'){
			cout << "YES";
			return 0;
		}
		else if(v[i][1] == '#' && v[i][2] == '#' && v[i+1][1] == '#' && v[i+1][2] == '#'){
			cout << "YES";
			return 0;
		}
		else if(v[i][2] == '#' && v[i][3] == '#' && v[i+1][2] == '#' && v[i+1][3] == '#'){
			cout << "YES";
			return 0;
		}
	}
 
	for(int i=0;i<4-1;i++){
		if(v[i][0] == '.' && v[i][1] == '.' && v[i+1][0] == '.' && v[i+1][1] == '.'){
			cout << "YES";
			return 0;
		}
		else if(v[i][1] == '.' && v[i][2] == '.' && v[i+1][1] == '.' && v[i+1][2] == '.'){
			cout << "YES";
			return 0;
		}
		else if(v[i][2] == '.' && v[i][3] == '.' && v[i+1][2] == '.' && v[i+1][3] == '.'){
			cout << "YES";
			return 0;
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(v[i][j] == '.'){
				bool flag = isSqure(v, i, j);
				if(flag){
					cout << "YES";
					return 0;
				}
			}
		}
   }
   for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(v[i][j] == '#'){
				bool flag = isSqure2(v, i, j);
				if(flag){
					cout << "YES";
					return 0;
				}
			}
		}
   }
   cout << "NO";
  
  return 0;
} 

// Problem link - https://codeforces.com/contest/287/problem/A