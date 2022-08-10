#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(auto &it : arr) cin>>it;
    
    int ans = 1, prev = -1e9;
    for(int i=0,j=0;j<arr.size();j++){
        if(arr[j] <= prev){
            ans = max(ans,j-i);
            i = j;
        }else{
            ans = max(ans,j-i+1);
        }
        prev = arr[j];
    }
    cout<<ans<<endl;
}