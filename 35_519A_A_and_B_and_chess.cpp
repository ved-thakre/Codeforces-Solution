#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  vector<vector<char>>v;
  for(int i=0;i<8;i++){
    vector<char>temp;
    for(int j=0;j<8;j++){
      char c;
      cin >> c;
      temp.push_back(c);
    }
    v.push_back(temp);
  }   
  int black = 0, white = 0;
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
       if(v[i][j] != '.'){
        char ch = v[i][j];
        if(ch>='a' && ch<='z'){
           if(ch == 'q') black += 9;
           else if(ch == 'r') black += 5;
           else if(ch == 'b') black += 3;
           else if(ch == 'n') black += 3;
           else if(ch == 'p') black += 1;
        }else{
           if(ch == 'Q') white += 9;
           else if(ch == 'R') white += 5;
           else if(ch == 'B') white += 3;
           else if(ch == 'N') white += 3;
           else if(ch == 'P') white += 1;
        }
       }
    }
  }
  if(white  > black) cout << "White";
  else if(black > white) cout << "Black";
  else cout << "Draw";
  return 0;
}

// Problem link - https://codeforces.com/problemset/problem/519/A