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
struct node{
    string name;
    ll task,time;
    node(string name,ll task,ll time):name(name),task(task),time(time){}
};
bool comp(const struct node&lhs,const node&rhs)
{
    if(lhs.task==rhs.task)
    {
        if(lhs.time==rhs.time)
        {
            return lhs.name<rhs.name;
        }
        return lhs.time<rhs.time;
    }
    return lhs.task>rhs.task;
}
void solve()
{
    ll n;
    cin >> n;
    map<string,pair<ll,ll>>mp;
    for(int i=0;i<n;i++)
    {
        string name,task;
        ll time;
        cin>>name>>task>>time;
        mp[name].first++;
        mp[name].second+=time;
    }
    vector<node>ans;
    for(auto it:mp)
    {
        ans.push_back(node(it.first,it.second.first,it.second.second));
    }
    sort(ans.begin(),ans.end(),comp);
    for(auto it:ans)
    {
        cout<<it.name<<sp<<it.task<<sp<<it.time<<nl;
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
