#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
   int n, m, a, len=0, wid=0;
   cin >> n >> m >> a;

   while(true){
      if(n <= 0) break;
      else{
        n-=a;
        len++;
      }
   }
   while(true){
      if (m <= 0)
        break;
      else
      {
        m -= a;
        wid++;
      }
   }
   cout << len * wid;   
   return 0;
}

// Problem link - https://codeforces.com/contest/1/problem/A