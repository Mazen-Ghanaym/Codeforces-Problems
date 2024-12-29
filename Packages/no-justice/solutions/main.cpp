#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ull unsigned long long
#define ld long double
#define nl "\n"
#define oo 1e9 + 1
#define OO 1e18 + 1
#define sp ' '
#define sz(x) int(x.size())
#define MOD 1000000007
#define fixed(n) fixed << setprecision(n)
#define sub_mod(a, b, m) ((((a) % m) - ((b) % m) + m) % m)
#define add_mod(a, b, m) ((((a) % m) + ((b) % m)) % m)
#define mult_mod(a, b, m) ((((a) % m) * ((b) % m)) % m)
#define EPS 1e-9
//#define PI acos(-1)
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

void solve()
{
    ll n;
    cin>>n;
    int cnt_A=0,cnt_B=0,cnt_C=0;
    for (int i = 0; i < n; i++){
        char c;
        cin>>c;
        if(c=='A')cnt_A++;
        else if(c=='B')cnt_B++;
        else cnt_C++;
    }
    int max_cnt=max({cnt_A,cnt_B,cnt_C});
    if(max_cnt==cnt_A)cout<<"A";
    else if(max_cnt==cnt_B)cout<<"B";
    else cout<<"C";
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