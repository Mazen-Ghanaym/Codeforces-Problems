#include "testlib.h"
using namespace std;

// inf - stream with the testdata.

int main(int argc, char *argv[])
{
    registerValidation(argc, argv);
    int testCaseCount = 1;
    // make comment on the next two line if the problem single test case
    //testCaseCount = inf.readInt(1, 100000, "TestCase");
    //inf.readEoln();
    for (int testCase = 1; testCase <= testCaseCount; testCase++)
    {
        setTestCase(testCase);
        // read the input
        int n = inf.readInt(1, 100000, "n");
        inf.readSpace();
        int q = inf.readInt(1, 100000, "q");
        inf.readEoln();
        for (int i = 0; i < n; i++)
        {
            int c = inf.readInt(1, 100000, "c");
            inf.readSpace();
            int d = inf.readInt(1, 1000000000, "d");
            inf.readEoln();
        }
        for (int i = 0; i < q; i++)
        {
            int l = inf.readInt(1, 100000, "l");
            inf.readSpace();
            int r = inf.readInt(1, 100000, "r");
            inf.readEoln();
        }
    }
    inf.readEof();
    return 0;
}
