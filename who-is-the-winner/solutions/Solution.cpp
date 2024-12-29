#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ull unsigned long long
#define ld long double
#define nl "\n"
#define oo 1e9 + 1
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
void solve()
{
    char a, b;
    cin >> a >> b;
    if (a == 'R'){
        if(b == 'R')
            cout << "Tie\n";
        else if(b == 'S')
            cout<<"Mazen\n";
        else
            cout<<"Mahmoud\n";
    }
    else if (a == 'S')
    {
        if (b == 'S')
            cout << "Tie\n";
        else if (b == 'P')
            cout << "Mazen\n";
        else
            cout << "Mahmoud\n";
    }
    else if (a == 'P')
    {
        if (b == 'P')
            cout << "Tie\n";
        else if (b == 'R')
            cout << "Mazen\n";
        else
            cout << "Mahmoud\n";
    }
}
int main(void)
{
    fastio();
    int tc = 1;
    // cin >> tc;
    int i = 1;
    while (tc--)
    {
        // cout<<"Case #"<<i++<<": ";
        solve();
    }
    return 0;
}
