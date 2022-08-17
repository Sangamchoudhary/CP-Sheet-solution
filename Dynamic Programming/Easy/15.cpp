#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef pair<long long int,long long int> pii;
#define M416 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
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

ll dp[100001];

ll solve(int i,vll &arr){
    if(dp[i] != -1) return dp[i];
    
    ll ans = 0;
    int idx = i+1;
    for(int k=idx*2;k<=arr.size();k+=idx){
        if(arr[k-1] > arr[i]) ans = max(ans,1+solve(k-1,arr));
    }
    
    return dp[i] = ans;
}

void solve(){
    ll n; cin>>n;
    vll arr(n); inp(arr);
    mem(dp);
    ll ans = 0;
    for(int i=0;i<n;i++) ans = max(ans,1+solve(i,arr)); // extra 1 for first model
    print(ans);
}
 
int main() {
    M416
	int t = 1; 
	cin>>t;
	while(t--) solve();
}