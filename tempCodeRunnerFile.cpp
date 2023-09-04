#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
   string s;
   cin >> s;
   int maxi = -1;

   int i = -1, j = 0;

   while(j<s.size()){
        char c = s[j];
        bool fl = true;
        if (c == 'A' || c == 'E' || c == 'O' || c == 'I' || c == 'U'){
            maxi = max(maxi, j-i);
            i = j;
            fl = false;
        }
        j++;
        if(j == s.size() && fl) maxi = max(maxi, j - i);
   }

   cout << maxi;
      
   return 0;
} 