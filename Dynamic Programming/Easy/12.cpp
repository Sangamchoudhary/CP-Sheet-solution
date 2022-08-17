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

ll dp[300001][2];
ll solve(int i,bool f,vll &arr){
    if(i == arr.size()) return 0;
    if(dp[i][f] != -1) return dp[i][f];
    
    ll op1 = ((f ? 1 : -1) * arr[i]) + solve(i+1,!f,arr);
    ll op2 = solve(i+1,f,arr);
    
    return dp[i][f] = max(op1,op2);
}

void solve(){
    ll n,q; cin>>n>>q;
    vll arr(n); inp(arr);
    mem(dp);
    print(solve(0,true,arr));
}
 
int main() {
    GODSPEED
	int t = 1; 
	cin>>t;
	while(t--) solve();
}