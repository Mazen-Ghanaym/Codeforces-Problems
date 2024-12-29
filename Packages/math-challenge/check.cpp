#include "testlib.h"
#include <bits/stdc++.h>

#define ll long long
#define all(vec) (vec.begin(), vec.end())
#define sz(s) (int)s.size()
using namespace std;

// inf - stream with the testdata.
// ouf - stream with the contestant output.
// ans - stream with the jury answer.

int main(int argc, char *argv[])
{
    registerTestlibCmd(argc, argv);
    int TestCases = 0;
    TestCases = inf.readInt(1, 100, "TestCases");
    int i = 0;
    while (TestCases--)
    {
        i++;
        setTestCase(TestCases);
        ll A = ouf.readLong(1LL, (ll)1e18, "A");
        ll B = ouf.readLong(1LL, (ll)1e18, "B");
        ll X = inf.readLong(1LL, (ll)1e18, "X");
        ll Y = inf.readLong(1LL, (ll)1e18, "Y");
        ll x = ans.readLong(1LL, (ll)1e18, "x");
        ll y = ans.readLong(1LL, (ll)1e18, "y");
        if (gcd(x,y) != X || lcm(x,y) != Y)
            quitf(_fail, "Wrong Answer test case %d", i);
        if (__gcd(A, B) != X || lcm(A, B) != Y)
            quitf(_wa, "Wrong Answer test case %d", i);
    }
    if (i == 1)
        quitf(_ok, "1 line");
    quitf(_ok, "%d lines", i);
}
