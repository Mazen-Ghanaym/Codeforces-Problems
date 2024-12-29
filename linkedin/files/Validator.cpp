#include "testlib.h"
using namespace std;

// inf - stream with the testdata.
#define ll long long
int main(int argc, char *argv[])
{
    registerValidation(argc, argv);
    int testCaseCount = 1;
    // make comment on the next two line if the problem single test case
    // testCaseCount = inf.readInt(1, 100000, "TestCase");
    // inf.readEoln();
    for (int testCase = 1; testCase <= testCaseCount; testCase++)
    {
        //setTestCase(testCase);
        ll n = inf.readInt(2, 200000, "n");
        inf.readSpace();
        ll m = inf.readInt(0, min(200000LL, n * (n - 1) / 2), "m");
        inf.readEoln();
        for (int i = 0; i < m; i++)
        {
            inf.readInt(1, n, "u");
            inf.readSpace();
            inf.readInt(1, n, "v");
            inf.readEoln();
        }
    }
    inf.readEof();
    return 0;
}