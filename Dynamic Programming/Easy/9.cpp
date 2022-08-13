#include<bits/stdc++.h>
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
    ll n; cin>>n;
    ll maxi = 1;
    unordered_map<string,ll> mp;
    mp.insert({"polycarp",1});
    
    while(n--){
        string u,p,v; cin>>u>>p>>v;
        transform(u.begin(),u.end(),u.begin(),::tolower);
        transform(v.begin(),v.end(),v.begin(),::tolower);
        mp[u] = max(mp[u],1 + mp[v]);
        maxi = max(maxi,mp[u]);
    }
    cout<<maxi<<endl;
}
 
int main() {
    GODSPEED
	int t = 1; 
	// cin>>t;
	while(t--) solve();
}