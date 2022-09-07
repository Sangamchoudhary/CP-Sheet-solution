// xxxxxxxxxxxxxxxxxxxxxxxxxxx DP on Digits xxxxxxxxxxxxxxxxxxxxxxxxx



#include<bits/stdc++.h>
using namespace std;
// ---------------------------------- SANGAM CHOUDHARY ---------------------------------------
typedef long long int ll;
typedef pair<long long int,long long int> pll;
#define tpl tuple<ll,ll,ll>
#define quad tpl<ll,ll,pll>
#define M416 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define vll vector<ll>
#define vpl vector<pll>
#define vtl vector<tpl>
#define vquad vector<quad>
#define ump(x,y) unordered_map<x,y>
#define ust(x) unordered_set<x>
#define pb push_back
#define ppb pop_back
#define inp(arr) for(auto &it : arr) cin>>it
#define mem(arr) memset(arr,-1,sizeof arr)
#define endl "\n"
#define rep(x,y,z) for(ll x=y;x<z;x++)
#define rev(x,y,z) for(ll x=y;x>=0;x--)
#define all(v) v.begin(),v.end()
#define nl cout<<endl
#define maxi(arr) *max_element(all(arr))
#define mini(arr) *max_element(all(arr))
int dx[] = {0,0,-1,1,-1,-1,1,1};
int dy[] = {1,-1,0,0,-1,1,1,-1};
void print(char val){cout<<val<<" ";} void print(ll val){cout<<val<<" ";}
void print(vector<ll> &arr) {for(auto &i : arr) cout<<i<<" "; nl;}
void print(string str) {cout<<str<<" ";}
/*
Hint:- 
- Read highlighted text 
- Think of reverse approach
- Make valid jumps only
- Question is wearing a mask - uncover it
- Think greedy
*/
// -------------------------------------------------------------------------------------------
ll dp[19][19][2];
ll solve(int idx, int cnt, bool bound, string &num){
    if(idx == num.size()) return (num.size() - cnt) <= 3;
    if(dp[idx][cnt][bound] != -1) return dp[idx][cnt][bound];
    
    ll ans = 0, val = num[idx]-'0';
    
    for(int i=0;i<=9;i++){
        int new_cnt = (i == 0) ? cnt+1 : cnt;
        bool new_bound = (bound and i == val) ? true : false;
        ans = (ans + solve(idx+1, new_cnt, new_bound, num)) % mod;
        if(bound and i == val)  break;
    }
    
    return dp[idx][cnt][bound] = ans;
}
void solve(){
    ll low,high; cin>>low>>high;
    mem(dp);
    ll lb = solve(0,0,true,string() = to_string(low-1));
    mem(dp);
    ll ub = solve(0,0,true,string() = to_string(high));
    print(ub - lb); nl;
}
 
int main() {
    M416
    int t = 1; 
    cin>>t;
    while(t--) solve();
}