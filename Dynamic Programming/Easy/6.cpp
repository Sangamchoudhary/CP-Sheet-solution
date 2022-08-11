#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef pair<long long int,long long int> pii;
#define GODSPEED ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define mod 1000000007
#define vpl vector<pll>
#define vll vector<ll>
#define inp(arr) for(auto &it : arr) cin>>it
#define mem(arr) memset(arr,-1,sizeof arr)
#define print(arr) for(auto &it:arr) cout<<it<<" "; cout<<endl;
#define endl "\n"

void solve(){
    string str; cin>>str;
    vll pref(str.size());
    for(int i=1;i<str.size();i++){
        if(str[i] == str[i-1]) pref[i]++;
        pref[i] += pref[i-1];
    }
    ll m; cin>>m;
    while(m--){
        ll l,r; cin>>l>>r;
        l--; r--;
        ll val = pref[r];
        if(l-1 >= 0) val -= pref[l];
        cout<<val<<endl;
    }
}
 
int main() {
    GODSPEED
	int t = 1; 
	// cin>>t;
	while(t--) solve();
}