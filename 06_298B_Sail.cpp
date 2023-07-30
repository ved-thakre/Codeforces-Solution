#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int t, sx, sy, ex, ey, time = -1;
    string wind;
    cin >> t >> sx >> sy >> ex >> ey >> wind;
    for (int i = 0; i < t; ++i){
      if (wind[i] == 'E' && sx < ex){
          sx += 1;
      }else if (wind[i] == 'S' && sy > ey){
          sy -= 1;
      }else if (wind[i] == 'W' && sx > ex){
          sx -= 1;
      }else if (wind[i] == 'N' && sy < ey){
          sy += 1;
      }
      if (sx == ex && sy == ey){
          time = i + 1;
          break;
      }
    }
    cout << time << endl;
      
  return 0;
} 

// Problem link - https://codeforces.com/contest/298/problem/B