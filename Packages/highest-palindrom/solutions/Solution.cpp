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
    string s;
    int n, k;
    cin >> n >> k >> s;
    vector<int> changed(s.size());
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            if (k - 1 >= 0)
            {
                if (s[i] > s[n - i - 1])
                {
                    s[n - i - 1] = s[i];
                    changed[n - i - 1] = 1;
                }
                else
                {
                    s[i] = s[n - i - 1];
                    changed[i] = 1;
                }
                k--;
            }
            else
                return void(cout << -1 << nl);
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != '9')
        {
            int b = changed[i] + changed[n - i - 1];
            int need = 2 - b;
            if (k - need >= 0)
            {
                s[i] = s[n - i - 1] = '9';
                k -= need;
            }
        }
    }
    if (k > 0 && s.size() % 2)
    {
        s[n / 2] = '9';
    }
    cout << s << nl;
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
