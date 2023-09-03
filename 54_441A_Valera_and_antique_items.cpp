#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
    int n, value, cnt = 0;
    cin >> n >> value;
    vector<int>ans;
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        int size;
        cin >> size;
        bool isValid = true;
        vector<int>arr(size);
        for(int j=0;j<size;j++){
            cin >> arr[j];
            if(arr[j] < value && isValid){
                cnt++;
                isValid = false;
                ans.push_back(i+1);
            }
        }
        v.push_back(arr);
    }
    cout << cnt << endl;
    for(auto i: ans){
        cout << i << " ";
    }
        
    return 0;
} 