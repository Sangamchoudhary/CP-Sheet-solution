#include<bits/stdc++.h>
using namespace std;
// ---------------------------------- SANGAM CHOUDHARY ------------------------------------
typedef long long int ll;
typedef pair<long long int,long long int> pll;
#define ff first
#define ss second
#define tpl tuple<ll,ll,ll>
#define quad tpl<ll,ll,pll>
#define mod 1000000007
#define vll vector<ll>
#define vpl vector<pll>
#define vtpl vector<tpl>
#define ump(x,y) unordered_map<x,y>
#define ust(x) unordered_set<x>
#define pb push_back
#define ppb pop_back
#define inp(x) for(auto &it : x) cin>>it
#define mem(x) memset(x,-1,sizeof x)
#define endl "\n"
#define rep(x,y,z) for(ll x=y;x<z;x++)
#define rev(x,y,z) for(ll x=y;x>=z;x--)
#define all(v) v.begin(),v.end()
#define nl cout<<endl
#define findMax(x) *max_element(all(x))
#define findMin(x) *min_element(all(x))
#define findSum(x) accumulate(all(x),0ll)
bool isPrime(ll n) {for(ll i=2;i<=sqrt(n);i++) if(n % i == 0) return false; return true;}
void print(char x) {cout<<x<<" ";}
void print(ll x) {cout<<x<<" ";}
void print(vector<ll> &arr) {for(auto &i : arr) cout<<i<<" "; nl;}
void print(string str) {cout<<str;}
/*
Hint:- 
- Read highlighted text 
- Think of reverse approach
- Make valid jumps only
- State optimization not possible? then think greedy with 2 pointer
*/
// ----------------------------------------------------------------------------------------
void solve(){
    ll k,n,w; cin>>k>>n>>w;
    ll sum = w/2.0 * (k + w*k);
    print(sum - n < 0 ? 0 : sum-n);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); int t = 1; 
    // cin>>t;
    while(t--) {solve(); nl; }
}