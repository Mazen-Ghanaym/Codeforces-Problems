#include "testlib.h"
using namespace std;

// inf - stream with the testdata.

int main(int argc, char *argv[])
{
    registerValidation(argc, argv);
    int testCaseCount = 1;
    // make comment on the next two line if the problem single test case
    // testCaseCount = inf.readInt(1, 1000'000, "TestCase");
    // inf.readEoln();
    for (int testCase = 1; testCase <= testCaseCount; testCase++)
    {
        setTestCase(testCase);
        // read the input
        int n = inf.readInt(1, 100000, "n");
        inf.readEoln();
        for (int i = 0; i < n; i++)
        {
            string name = inf.readToken("[A-z]{1,10}", "name");
            inf.readSpace();
            string task = inf.readToken("[A-z]{1,10}", "task");
            inf.readSpace();
            int time = inf.readInt(1, 3000, "time");
            inf.readEoln();
        }
    }
    inf.readEof();
    return 0;
}
