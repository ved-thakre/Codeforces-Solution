#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  string s , t;
  cin >> s;
  t = s;
  bool fC = true, Alls = true, AllC = true;
  for(int i=0;i<s.size();i++){
     if((s[i] >= 'A' && s[i] <= 'Z')) continue;
     else AllC = false;
  }
  if(AllC){
    for(int i=0;i<s.size();i++){
     s[i] = t[i] = 'a' + (s[i] - 'A');
    }
    cout << s;
    return 0;
  }
  if(s[0] < 'A' || s[0] > 'Z'){
    t[0] = 'A' + (s[0] - 'a');
    fC = false;
  }
  for(int i=1;i<s.size();i++){
    if((s[i] >= 'A' && s[i] <= 'Z') && !fC){
        t[i] = 'a' + (s[i] - 'A');
    }else if((s[i] >= 'a' && s[i] <= 'z') && fC){
        t[i] = s[i];
    }else{
        cout << s;
        return 0;
    } 
  }

  cout << t;
      
  return 0;
} 


// https://codeforces.com/problemset/problem/131/A