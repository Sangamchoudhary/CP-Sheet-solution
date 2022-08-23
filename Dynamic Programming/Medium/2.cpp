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
int p;
bool solve(int i,int sum,vll &arr,vector<vector<ll>> &dp){
    if(!sum) return true;
    if(i == arr.size()) return false;
    if(dp[i][sum] != -1) return dp[i][sum];
    
    bool op1 = solve(i+1,(sum + arr[i]) % p,arr,dp);
    bool op2 = solve(i+1,sum,arr,dp);
    
    return dp[i][sum] = op1 or op2;
}
void solve(){
    ll n,m; cin>>n>>m;
    p = m;
    if(n > 1e3){cout<<"YES"<<endl; return;}
    vll arr(n); inp(arr);
    vector<vector<ll>> dp(n+1,vector<ll> (m+1,-1));
    for(int i=0;i<n;i++){
        if(solve(i+1,arr[i]%p,arr,dp)) {cout<<"YES"<<endl; return;}
    }
    cout<<"NO"<<endl;
}
 
int main() {
    M416
	int t = 1; 
	// cin>>t;
	while(t--) solve();
}