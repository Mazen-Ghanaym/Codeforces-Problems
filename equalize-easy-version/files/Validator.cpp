#include "testlib.h"
using namespace std;

// inf - stream with the testdata.

int main(int argc, char *argv[])
{
    registerValidation(argc, argv);
    int testCaseCount = 1;
    // make comment on the next two line if the problem single test case
    //testCaseCount = inf.readInt(1, 10000, "TestCase");
    //inf.readEoln();
    for (int testCase = 1; testCase <= testCaseCount; testCase++)
    {
        setTestCase(testCase);
        // read the input
        int n = inf.readInt(1, 10, "n");
        inf.readEoln();
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = inf.readInt(1, 50, "a_i");
            if (i + 1 < n)
                inf.readSpace();
        }
        inf.readEoln();
    }
    inf.readEof();
    return 0;
}
