#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
   string temp = s;
   reverse(begin(s),end(s));
   return temp == s;
}
         
int main(){
         
  string s;
  cin >> s;
  if(isPalindrome(s)) cout << "YES";
  else{
    int i = s.size()-1;
    int j = 0;
    while (s[i] == '0') i--;
    while (s[j] == '0') j++;
    string temp = s.substr(j, i-j+1);
    if(isPalindrome(temp)){
      cout << "YES";
      return 0;
    }
    
    cout << "NO";
  }
      
  return 0;
} 

// Problem link - https://codeforces.com/problemset/problem/863/A