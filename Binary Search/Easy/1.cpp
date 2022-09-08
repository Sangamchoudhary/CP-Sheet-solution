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
void print(char val){cout<<val<<" ";} void print(ll val){cout<<val;}
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

void solve(){
    string str; cin>>str;
    ll nb,ns,nc; cin>>nb>>ns>>nc;
    ll cb,cs,cc; cin>>cb>>cs>>cc;
    ll rubles; cin>>rubles;
    
    unordered_map<char,int> mp;
    for(auto i : str) mp[i]++;
    
    ll ans = 0, low = 0, high = 1e15;
    while(low <= high){
        ll mid = (low + high)/2;
        
        ll money = rubles;
        
        ll req_b = mid*mp['B'], req_s = mid*mp['S'], req_c = mid*mp['C'];
        ll need_b, need_s, need_c;
        if(nb >= req_b or !mp['B']) need_b = 0;
        else need_b = req_b - nb;
        
        if(nc >= req_c or !mp['C']) need_c = 0;
        else need_c = req_c - nc;
        
        if(ns >= req_s or !mp['S']) need_s = 0;
        else need_s = req_s - ns;
        
        if(need_b*cb > money) {high = mid-1; continue;}
        else money -= (need_b*cb);
        
        if(need_s*cs > money) {high = mid-1; continue;}
        else money -= (need_s*cs);
        
        if(need_c*cc > money) {high = mid-1; continue;}
        else money -= (need_c*cc);
        
        ans = mid;
        low = mid+1;
    }
    print(ans);
}
 
int main() {
    M416
    int t = 1; 
    // cin>>t;
    while(t--) solve(), nl;
}