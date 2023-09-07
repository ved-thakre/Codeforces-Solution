#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
   string pass;
   cin >> pass;
   int n;
   cin >> n;
   vector<string>arr(n);
   for(int i=0;i<n;i++) cin >> arr[i];

   char first = pass[0] , second = pass[1];
   
   bool one = false, two = false;
   for(int i=0;i<n;i++){
    if(arr[i][0] == first) one = true;
    if(arr[i][1] == second) two = true;
   }
   if(one && two){
        cout << "YES";
        return 0;
   }else{
        one = false;
        two = false;
        for(int i=0;i<n;i++){
            if(arr[i][0] == second) one = true;
            if(arr[i][1] == first) two = true;
        }
     if(one && two) {
            cout << "YES";
            return 0;
     }
   }
   cout << "NO";
      
   return 0;
} 