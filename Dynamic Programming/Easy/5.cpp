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
    ll n,k; cin>>n>>k;
    vll arr(n); inp(arr);
    ll ans = 1e9, sum = 0, idx = -1;
    for(int i=0,j=0;j<n;j++){
        sum += arr[j];
        if(j-i+1 == k){
            if(ans > sum){
                idx = i; ans = sum;
            }
            sum -= arr[i++];
        }
    }
    cout<<idx<<endl;
}
 
int main() {
    GODSPEED
	int t = 1; 
	// cin>>t;
	while(t--) solve();
}