#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef pair<long long int,long long int> pii;
#define mod 1000000007
#define vpl vector<pll>
#define vll vector<ll>
#define inp(arr) for(auto &it : arr) cin>>it
#define mem(arr) memset(arr,-1,sizeof arr)
#define print(arr) for(auto &it:arr) cout<<it<<" "; cout<<endl;
 
ll dp[102][102];

ll solve(int i,vll &a, int j, vll &b){
    if(i >= a.size() and j >= b.size()) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    
    ll op1 = 0, op2 = 0, op3 = 0;
    if(i < a.size()) op1 = a[i] + solve(i+1,a,j,b);
    if(j < b.size()) op2 = b[j] + solve(i,a,j+1,b);
    
    return dp[i][j] = max({op1,op2,op3});
}

void solve(){
    ll n; cin>>n;
    vll arr1(n); inp(arr1); 
    ll m; cin>>m;
    vll arr2(m); inp(arr2); 
    mem(dp);
    cout<<solve(0,arr1,0,arr2)<<endl;
}
 
int main() {
	int t = 1; 
	cin>>t;
	while(t--) solve();
}