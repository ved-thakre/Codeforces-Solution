#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int da, db;
  cin >> da >> db;
  if(da == 9 && db == 1) cout << da  << " " << db * 10;
  else if((abs(da - db) > 1) || da > db) cout << -1;
  else{
    if(da == db){
        da = da * 10 + 1;
        db = db * 10 + 2;
    }else{
        da = da * 10 + 9;
        db = db * 10;
    }
    cout << da << " " << db;
  }
      
  return 0;
} 