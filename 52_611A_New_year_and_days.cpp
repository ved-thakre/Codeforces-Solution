#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  string s;
  getline(cin,s);

  // Friday 1st january
  string numm = "";
  int i=0;
  while(s[i] != ' ') numm += s[i++];
  int num = stoi(numm);

  
 if(s[s.size()-1] == 'k'){  
    if(num == 5 || num == 6) cout << 53;
    else cout << 52;
 }else if(s[s.size()-1] == 'h'){
    if(num <= 29) cout << 12;
    else if(num==31) cout << 7;
    else cout << 11;
 }

      
  return 0;
} 

// https://codeforces.com/problemset/problem/611/A