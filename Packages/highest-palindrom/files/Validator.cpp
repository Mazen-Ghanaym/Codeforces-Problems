#include "testlib.h"
using namespace std;

// inf - stream with the testdata.

int main(int argc, char *argv[])
{
    registerValidation(argc, argv);
    int testCaseCount = 1;
    // make comment on the next two line if the problem single test case
    // testCaseCount = inf.readInt(1, 100000, "TestCase");
    // inf.readEoln();
    for (int testCase = 1; testCase <= testCaseCount; testCase++)
    {
        setTestCase(testCase);
        int n = inf.readInt(1, 200000, "n");
        inf.readSpace();
        int k = inf.readInt(0, 200000, "k");
        inf.readEoln();
        string s = inf.readToken("[0-9]{1,200000}", "s");
        inf.readEoln();
    }
    inf.readEof();
    return 0;
}