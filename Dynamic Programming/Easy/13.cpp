#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef pair<long long int,long long int> pii;
#define GODSPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define vpp vector<pii>
#define vll vector<ll>
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

ll dp[2004][2004];
ll solve(ll i,ll n,ll k){
    if(k == 0) return 1;
    if(i > n) return 0;
    if(dp[i][k] != -1) return dp[i][k];
    
    ll ans = 0;
    for(int j=1;j*i<=n;j++){
        ans += solve(j*i,n,k-1) % mod;
    }
    
    return dp[i][k] = ans;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    mem(dp);
    ll ans = 0;
    for(int i=1;i<=n;i++) ans += solve(i,n,k-1), ans %= mod;
    print(ans);
}
 
int main() {
    GODSPEED
	int t = 1; 
	// cin>>t;
	while(t--) solve();
}