#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cstdio>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <bits/hash_bytes.h>
#include <unordered_map>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ull unsigned long long
#define ld long double
#define nl "\n"
#define oo 1e18 + 1
#define sp ' '
#define YES cout << "YES\n"
#define Yes cout << "Yes\n"
#define NO cout << "NO\n"
#define No cout << "No\n"
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mod 1000000007
#define fr(n) for (int i = 0; i < n; i++)
#define fr1(n) for (int i = 1; i <= n; i++)
#define frj(n) for (int j = 0; j < n; j++)
#define frj1(n) for (int j = 1; j <= n; j++)
#define cin(a, n) fr(n) cin >> x;
#define cin1(a, n) fr1(n - 1) cin >> x;
#define ppc __builtin_popcount
#define pb push_back
#define pf push_front
#define ppb pop_back
#define mi map<int, int>
#define pp pair<int, int>
#define vi vector<int>
#define vll vector<ll>
#define fi first
#define sc second
#define fixed(n) fixed << setprecision(n)
#define sub_mod(a, b, m) (((a % m) - (b % m) + m) % m)
#define add_mod(a, b, m) ((((a) % m) + ((b) % m)) % m)
#define mult_mod(a, b, m) (((a % m) * (b % m)) % m)
#define EPS 1e-9
using namespace __gnu_pbds;
#define ordered_multiset tree<int, null_type, less_equal<>, rb_tree_tag, tree_order_statistics_node_update>
#define ordered_set tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll sum1_n(ll n) { return n * (n + 1) / 2; }
string binary(ll n) { return (n <= 0 ? "" : binary(n / 2) + (n % 2 ? "1" : "0")); }
ll sumd(ll n) { return n == 0 ? 0 : (n % 10) + sumd(n / 10); }
ll max(ll n1, ll n2) { return (n1 >= n2) ? n1 : n2; }
ll min(ll n1, ll n2) { return (n1 >= n2) ? n2 : n1; }

template <typename T = int>
istream &operator>>(istream &in, vector<T> &v){
    for (ll i = 0; i < sz(v); i++)
        in >> v[i];
    return in;
}
template <typename T = int>
ostream &operator<<(ostream &out, const vector<T> &v){
    for (ll i = 0; i < sz(v); i++)
        out << v[i] << ' ';
    return out;
}
void fastio(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
}
void solve(){
    int n;
    cin >> n;
    vi a(n);
    cin >> a;
    int q;
    cin >> q;
    ll sum = 0;
    while(q--){
        int d,x,y;
        cin >> d >> x >> y;
        x--;
        cout << a[--d] << nl;
        sum += a[d];
        a[x] = max(a[x] ,y);
    }
    cout << sum << nl;
}




int main(void)
{
    fastio();
    int tc = 1;
    //cin >> tc;
    // int i=1;
    while (tc--)
    {
        // cout<<"Case "<<i++<<": ";
        solve();
    }
    return 0;
}