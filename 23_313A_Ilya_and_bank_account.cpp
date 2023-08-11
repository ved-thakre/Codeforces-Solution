#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  string s;
  cin >> s;
  if(s[0] != '-'){
    cout << s;
  }else{
    int last = s[(s.size()-1)]- '0';
    int slast = s[(s.size()-2)]- '0';
    if(last > slast){
        s.pop_back();
        cout << s;
    }else{
        char c = s[s.size()-1];
        if(s.size() == 3 && (c == '0' && s[s.size()-2] != '0')) cout << 0;
        else{
            s.pop_back();
            s.pop_back();
            s.push_back(c);
            cout << s;
        }
    }
  }
  
  return 0;
} 

// Problem link - https://codeforces.com/contest/313/problem/A