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
#define str(x) to_string(x);
int dx[] = {0,0,-1,1,-1,-1,1,1};
int dy[] = {1,-1,0,0,-1,1,1,-1};
bool isPrime(ll n){for(ll i=2;i<=sqrt(n);i++) if(n % i == 0) return false; return true;}
void print(char ch) {cout<<ch<<" ";}
void print(ll num) {cout<<num<<" ";}
void print(vector<ll> &arr) {for(auto &i : arr) cout<<i<<" "; nl;}
void print(string str) {cout<<str;}
/*
Hint:- 
- Read highlighted text 
- Think of reverse approach
- Make valid jumps only
- Question is wearing a mask - uncover it
- State optimization not possible? then think greedy
*/
// -------------------------------------------------------------------------------------------
 
void solve(){
    ll m,n; cin>>m>>n;
    bool flag = true;
    rep(i,0,m){
        if(i % 2) flag = !flag;
        rep(j,0,n){
            if(i % 2 == 0){
                print("#");
            }else{
                if(j == 0 and flag){
                    print("#");
                }else if(j == n-1 and !flag){
                    print("#");
                }else{
                    print(".");
                }
            }
        }
        nl;
    }
}
int main() {
    M416
    int t = 1; 
    // cin>>t;
    while(t--) solve(), nl;
}