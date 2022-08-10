#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef pair<long long int,long long int> pii;
#define mod 1000000000 + 7
#define vpp vector<pll>
#define vll vector<ll>
#define inp(arr) for(auto &it : arr) cin>>it
#define mem(arr) memset(arr,-1,sizeof arr)
#define print(arr) for(auto &it:arr) cout<<it<<" "
 
ll dp[101][101];
 
ll solve(int i,int j,string &str,string &pat){
    if(j < 0) return 1;
    if(i < 0) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    
    ll op1 = 0;
    if(str[i] == pat[j]) op1 = solve(i-1,j-1,str,pat);
    ll op2 = solve(i-1,j,str,pat);
    
    return dp[i][j] = op1 + op2;
}
 
void solve(){
    string str; getline(cin,str);
    string pat = "QAQ";
    mem(dp);
    cout<<solve(str.size()-1,2,str,pat)<<endl;
}
 
int main() {
	int t = 1; 
	// cin>>t;
	while(t--) solve();
}