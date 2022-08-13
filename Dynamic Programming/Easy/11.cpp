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
#define print(arr) for(auto &it:arr) cout<<it<<" "; cout<<endl
#define printv(val) cout<<val<<endl
#define printvp(arr) for(auto &[i,j] : arr) cout<<i<<" "<<j<<endl
#define endl "\n"
#define rep(x,y,z) for(ll x=y;x<z;x++)
#define rep2(x,y,z) for(ll x=0,y=0;y<z;y++)

ll dp[100001];
ll solve(ll n,ll a,ll b,ll c){
    if(n == 0) return 0;
    if(n < 0) return -1e9;
    if(dp[n] != -1) return dp[n];
    
    ll op1 = solve(n-a,a,b,c);
    ll op2 = solve(n-b,a,b,c);
    ll op3 = solve(n-c,a,b,c);
    
    return dp[n] = 1 + max({op1,op2,op3});
}

void solve(){
    ll n,a,b,c; cin>>n>>a>>b>>c;
    mem(dp);
    printv(solve(n,a,b,c));
}
 
int main() {
    GODSPEED
	int t = 1; 
	// cin>>t;
	while(t--) solve();
}