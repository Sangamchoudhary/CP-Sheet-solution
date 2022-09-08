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
    ll n,h; cin>>n>>h;
    vll arr(n); inp(arr);
    ll ans, low = 0, high = 1e18;
    while(low <= high){
        ll mid = low + (high - low)/2;
        ll prev = arr.front()-1, sum = 0;
        rep(i,0,n){
            if(prev >= arr[i]){
                sum -= prev-arr[i]+1;
                sum += mid;
                prev = arr[i]+mid-1;
            }else{
                sum += mid;
                prev = arr[i]+mid-1;
            }
        }
        if(sum >= h) ans = mid, high = mid-1;
        else low = mid+1;
    }
    print(ans);
}
 
int main() {
    M416
    int t = 1; 
    cin>>t;
    while(t--) solve(), nl;
}