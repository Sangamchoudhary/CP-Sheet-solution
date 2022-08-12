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

void solve(){
    ll n; cin>>n; 
    vll arr(n); inp(arr);
    ll ones = 0;
    for (auto &it : arr) {
        cin >> it;
        ones += it;
        if (it == 1)
            it = -1;
        else
            it = 1;
    }
    if (ones == n) {
        cout << ones - 1 << '\n';
        return;
    }
    ll ans = 0, x = 0;
    for (int i = 0; i < n; i++) {
        x = max(x + arr[i], 0ll);
        ans = max(x, ans);
    }
    cout << ans + ones << '\n';    
}
 
int main() {
    GODSPEED
	int t = 1; 
	// cin>>t;
	while(t--) solve();
}