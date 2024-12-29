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
map<int,int> primeFactors(int n)
{
    map<int,int> mp;
    while (n%2 == 0)
    {
        mp[2]++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            mp[i]++;
            n = n/i;
        }
    }
    if (n > 2)
        mp[n]++;
    return mp;
}
ll powr(ll b,ll n)
{
    ll pow=1;
    while(n>0){
        if(n%2)pow=pow*b;
        b=b*b;
        n/=2;
    }
    return pow;
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
ll modinv(ll n,ll m){
    return powrmod(n,m-2,m);
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll lm = 1;
    map<int, int> mxf;
    for (auto &it : v){
        cin >> it;
        map<int, int> mp = primeFactors(it);
        for (auto &it : mp){
            mxf[it.first] = max(mxf[it.first], it.second);
        }
    }
    for (auto &it : mxf){
        lm = mult_mod(lm,powrmod(it.first, it.second, mod),mod);
    }
    ll sum = 0;
    for (auto &it : v){
        sum = add_mod(sum, mult_mod(lm, modinv(it, mod), mod), mod);
    }
    cout << sum << nl;
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