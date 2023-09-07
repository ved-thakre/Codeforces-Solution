#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
   string s, pass;
   int n;
   cin >> pass >> n;
   if(n == 1){
        cin>>s;
        if(pass == s){
            cout<<"YES"<<endl;
        }
        else{
            reverse(s.begin(),s.end());
            if(pass == s){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        return 0;
    }
    int flag = 0,okf = 0, okl = 0;
    while(n--){
        cin>>s;
        if(pass[0] == s[1]){
            okf = 1;
        }
        if(pass[1] == s[0]){
            okl = 1;
        }
        if(pass == s){
            flag = 1;
        }
    }
    if(flag == 1 || (okf == okl && okf == 1)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

      
   return 0;
} 