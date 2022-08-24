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
void solve(){
    ll x,y; cin>>x>>y;
    ll ans = 0;
    if(x < 10 and y < 10) {cout<<y-x+1<<endl; return;}
    while(y % 10 != 0){
        string str = to_string(y);
        if(str.front() == str.back()) ans++;
        y--;
    }
    while(x % 10 != 0){
        string str = to_string(x);
        if(str.front() == str.back()) ans++;
        x++;
    }    
    ans += ((y-x)/10);
    cout<<ans<<endl;
}
 
int main() {
    M416
	int t = 1; 
	// cin>>t;
	while(t--) solve();
}