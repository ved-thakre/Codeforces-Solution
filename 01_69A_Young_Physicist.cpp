#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
    int n, a, b, c;
    cin >> n;
    int x = 0, y = 0, z = 0;
    for(int i=0;i<n;i++){
        cin >> a >> b >> c;
        x+=a, y+=b , z+=c;
    }
    if(x==0 && y==0 && z==0){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
 
    return 0;
}

// Problem link - https://codeforces.com/problemset/problem/69/A