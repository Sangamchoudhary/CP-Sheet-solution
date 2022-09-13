#include<bits/stdc++.h>
using namespace std;
// ---------------------------------- SANGAM CHOUDHARY ---------------------------------------
typedef long long int ll;
typedef pair<long long int,long long int> pll;
#define ff first
#define ss second
#define tpl tuple<ll,ll,ll>
#define quad tpl<ll,ll,pll>
#define mod 1000000007
#define vll vector<ll>
#define vpl vector<pll>
#define vtl vector<tpl>
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
#define findMax(arr) *max_element(all(arr))
#define findMin(arr) *min_element(all(arr))
#define findSum(arr) accumulate(all(arr),0ll)
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
- State optimization not possible? then think greedy
*/
// -------------------------------------------------------------------------------------------

void solve(){
    
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); int t = 1; 
    // cin>>t;
    while(t--) solve(), nl;
}