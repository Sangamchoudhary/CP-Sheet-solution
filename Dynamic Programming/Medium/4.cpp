// Divide and conquer

#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef pair<long long int,long long int> pii;
#define M416 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define vpp vector<pii>
#define vll vector<ll>
#define ump(x,y) unordered_map<x,y>
#define pb push_back
#define ppb pop_back
#define inp(arr) for(auto &it : arr) cin>>it
#define mem(arr) memset(arr,-1,sizeof arr)
#define print(val) cout<<val<<endl
#define printv(arr) for(auto &it:arr) cout<<it<<" "; cout<<endl
#define printvp(arr) for(auto &[i,j] : arr) cout<<i<<" "<<j<<endl
#define endl "\n"
#define rep(x,y,z) for(ll x=y;x<z;x++)
#define rep2(x,y,z) for(ll x=0,y=0;y<z;y++)
#define div(x,y) x % y == 0
ll dp[5001][5001];
ll solve(ll i,ll j,vll &arr){
    if(i > j) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    
    ll mn = *min_element(arr.begin()+i,arr.begin()+j+1);
    // cout<<mn<<endl;
    ll prev = i, ans = mn;
    for(ll k=i;k<=j;k++){
        if(arr[k] == mn){
            ans += solve(prev,k-1,arr);
            prev = k+1;
        }else if(k == j){
            arr[k] -= mn;
            ans += solve(prev,k,arr); 
        }
        arr[k] -= mn;
    }
    
    return dp[i][j] = min(ans,j-i+1);
}
void solve(){
    ll n; cin>>n;
    vll arr(n); inp(arr);
    mem(dp);
    cout<<solve(0,n-1,arr)<<endl;
}
 
int main() {
    M416
	int t = 1; 
	// cin>>t;
	while(t--) solve();
}