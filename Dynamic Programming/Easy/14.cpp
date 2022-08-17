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

ll dp[100001][2];

ll solve(int i,bool f,vll &arr1,vll &arr2){
    if(i == arr1.size()) return 0;
    if(dp[i][f] != -1) return dp[i][f];
    
    ll op1 = 0, op2 = 0;
    if(f) op1 = arr1[i] + solve(i+1,!f,arr1,arr2);
    else op1 = arr2[i] + solve(i+1,!f,arr1,arr2);
    op2 = solve(i+1,f,arr1,arr2);
    
    return dp[i][f] = max(op1,op2);
}

void solve(){
    ll n; cin>>n;
    vll arr1(n), arr2(n); inp(arr1); inp(arr2);
    mem(dp);
    ll op1 = solve(0,true,arr1,arr2);
    ll op2 = solve(0,false,arr1,arr2);
    print(max(op1,op2));
}
 
int main() {
    GODSPEED
	int t = 1; 
	// cin>>t;
	while(t--) solve();
}