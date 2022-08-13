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

ll dp[1001][2][2][2];
ll solve(ll i,vector<pair<ll,string>> &vp,bool a,bool b,bool c){
    if(a and b and c) return 0;
    if(i == vp.size()) return 1e9;
    if(dp[i][a][b][c] != -1) return dp[i][a][b][c];
    
    bool A = vp[i].second.find("A") != string::npos; 
    bool B = vp[i].second.find("B") != string::npos; 
    bool C = vp[i].second.find("C") != string::npos; 
    ll op1 = vp[i].first + solve(i+1,vp,a or A,b or B,c or C);
    ll op2 = solve(i+1,vp,a,b,c);
    
    return dp[i][a][b][c] = min(op1,op2);
}
void solve(){
    ll n; cin>>n;
    vector<pair<ll,string>> vp;
    while(n--){
        ll x; cin>>x;
        string str; cin>>str;
        vp.push_back({x,str});
    }
    mem(dp);
    unordered_set<char> st;
    ll ans = solve(0,vp,false,false,false);
    cout<<(ans >= 1e9 ? -1 : ans)<<endl;
}
 
int main() {
    GODSPEED
	int t = 1; 
	// cin>>t;
	while(t--) solve();
}