#include <bits/stdc++.h>
using namespace std;
         
int main(){

  int n;
  cin >> n;
  vector<int>arr(n);
  for(int i=0;i<n-1;i++) cin >> arr[i];
  while(true){
    vector<int>temp;
    bool doesExist = false;
    for(int i=0;i<n-1;i++){
        if((arr[i] == 0 && arr[i+1] == 1) || (arr[i] == 1 && arr[i+1] == 0)){
            arr[i] = -1;
            arr[i+1] = -1;
            doesExist = true;
        }
    }
    if(!doesExist) break;
    for(int i=0;i<n-1;i++){
        if(arr[i] != -1) temp.push_back(arr[i]);
    }
    arr = temp;
    temp.clear();
  }
  cout << arr.size();
      
  return 0;
} 