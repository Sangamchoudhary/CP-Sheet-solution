// Not Accepted ---- Getting TLE at test case 6

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

ll dp[5001][5001];
ll solve(ll n,ll a,ll b,ll k){
    if(!k) return 1;
    if(abs(a - b) <= 1) return 0;
    if(dp[a][k] != -1) return dp[a][k];
    
    ll dist = abs(a-b), ans = 0;
    rep(j,1,dist){
        ll prev = a-j;
        if(prev > 0) ans = (ans + solve(n,prev,b,k-1)) % mod;
        else break;
    }
    rep(j,1,dist){
        ll next = a+j;
        if(next <= n) ans = (ans + solve(n,next,b,k-1)) % mod;
        else break;
    }
    
    return dp[a][k] = ans;
}

void solve(){
    ll n,a,b,k; cin>>n>>a>>b>>k;
    if(n == k) return 
    mem(dp);
    print(solve(n,a,b,k));
}
 
int main() {
    M416
	int t = 1; 
	// cin>>t;
	while(t--) solve();
}