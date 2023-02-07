#include<bits/stdc++.h>
using namespace std;
// ---------------------------------- SANGAM CHOUDHARY ------------------------------------
typedef long long int ll;
typedef pair<long long int,long long int> pll;
#define I_AM_IRON_MAN ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ff first
#define ss second
#define tpl tuple<ll,ll,ll>
#define quad tpl<ll,ll,pll>
#define N 300005
#define mod 1000000007
#define umod 998244353
#define vll vector<ll>
#define vpl vector<pll>
#define vtpl vector<tpl>
#define pb push_back
#define ppb pop_back
#define inp(x) for(auto &it : x) cin>>it
#define endl "\n"
#define rep(x,y,z) for(ll x=y;x<=z;x++)
#define rev(x,y,z) for(ll x=y;x>=z;x--)
#define all(v) v.begin(),v.end()
#define nl cout<<endl
#define cts(x) to_string(x)
#define Max(x) *max_element(all(x))
#define Min(x) *min_element(all(x))
#define Sum(x) accumulate(all(x),0ll)
#define SIEVE vll prime(N);prime[1] = false; rep(i,2,N-1){ if(prime[i]) continue; for(ll j=i*i;j<N;j+=i){ prime[j] = true;}}
bool isPrime(ll n) {for(ll i=2;i<=sqrt(n);i++) if(n%i == 0) return false; return true;}
void print(vll &arr) {for(auto &i:arr)cout<<i<<" ";}
template<typename... T> void print(T... args) {(cout << ... << args);}
void pnc(){
    // ll inv(ll i) {if(i == 1)return 1; return(mod-((mod/i)*inv(mod%i))%mod)%mod;}
    // ll mod_mul(ll a, ll b) {a%=mod; b%=mod; return (((a*b)%mod)+mod)%mod;}
    // ll mod_add(ll a, ll b) {a%=mod; b%=mod; return (((a+b)%mod)+mod)%mod;}
    // vll fact(300005,1), ifact(300005,1);
    // ll C(ll n,ll r){ if(r > n) return 0; ll ans = fact[n]; ans = mod_mul(ans,ifact[r]); ans = mod_mul(ans,ifact[n-r]); return ans; }
    // void cmbn(){rep(i,2,N+1) fact[i] = mod_mul(fact[i-1],i);ifact[N] = inv(fact[N]);for(ll i = N-1;i>0;i--) ifact[i] = mod_mul(i+1,ifact[i+1]);}
}
// ----------------------------------------------------------------------------------------
void preprocessing(){}
void solve(){
    
}
int main() {
    I_AM_IRON_MAN; int t = 1; 
    cin>>t;
    preprocessing(); while(t--) solve(), nl;
}