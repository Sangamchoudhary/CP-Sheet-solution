#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef pair<long long int,long long int> pii;
#define GODSPEED ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define mod 1000000007
#define vpp vector<pii>
#define vll vector<ll>
#define pb push_back
#define ppb pop_back
#define inp(arr) for(auto &it : arr) cin>>it
#define mem(arr) memset(arr,-1,sizeof arr)
#define print(arr) for(auto &it:arr) cout<<it<<" "; cout<<endl;
#define printvp(arr) for(auto &[i,j] : arr) cout<<i<<" "<<j<<endl;
#define endl "\n"
#define rep(x,y,z) for(ll x=y;x<z;x++)
#define rep2(x,y,z) for(ll x=0,y=0;y<z;y++)

void solve(){
    ll n,k; cin>>n>>k; 
    vll arr1(n), arr2(n); 
    inp(arr1); inp(arr2);
    
    ll sum = 0;
    rep(i,0,n) if(arr2[i]) sum += arr1[i];
    
    ll s = 0,res = 0;
    rep2(i,j,n){
        if(!arr2[j]) sum += arr1[j];
        if(j-i+1 == k){
            res = max(res,sum);
            if(!arr2[i]) sum -= arr1[i];
            i++;
        }
    }
    
    cout<<res<<endl;
}
 
int main() {
    GODSPEED
	int t = 1; 
	// cin>>t;
	while(t--) solve();
}