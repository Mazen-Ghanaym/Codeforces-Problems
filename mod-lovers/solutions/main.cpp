#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ull unsigned long long
#define ld long double
#define nl "\n"
#define oo 1e18 + 1
#define sp ' '
#define sz(x) int(x.size())
#define mod 1000000007
#define fixed(n) fixed << setprecision(n)
#define sub_mod(a, b, m) (((a % m) - (b % m) + m) % m)
#define add_mod(a, b, m) ((((a) % m) + ((b) % m)) % m)
#define mult_mod(a, b, m) (((a % m) * (b % m)) % m)
#define EPS 1e-9
using namespace __gnu_pbds;
using namespace std;
ll max(ll n1, ll n2) { return (n1 >= n2) ? n1 : n2; }
ll min(ll n1, ll n2) { return (n1 >= n2) ? n2 : n1; }
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
}
ll powrmod(ll b,ll n,ll m){
    ll pow=1;
    while(n>0){
        if(n%2)pow=mult_mod(pow,b,m);
        b=mult_mod(b,b,m);
        n/=2;
    }
    return pow;
}
ll mod_inv(ll a,ll b,ll m){
    return mult_mod(a,powrmod(b,m-2,m),m);
}
void solve()
{
    int n;
    cin >> n;
    vector<ll> pref(n + 1);
    pref[0] = 1;
    for (int i = 1; i <= n;i++){
        int x;
        cin >> x;
        pref[i]=mult_mod(pref[i - 1], x, mod);
    }
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << mod_inv(pref[r],pref[l-1],mod) << nl;
    }
}
int main(void)
{
    fastio();
    int tc = 1;
    //cin >> tc;
    int i = 1;
    while (tc--)
    {
        // cout<<"Case #"<<i++<<": ";
        solve();
    }
    return 0;
}
