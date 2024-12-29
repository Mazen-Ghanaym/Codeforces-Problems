#include "testlib.h"
using namespace std;

// inf - stream with the testdata.

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int testCaseCount = 1;
    // make comment on the next two line if the problem single test case
    //testCaseCount = inf.readInt(1, 100'00, "TestCase");
    //inf.readEoln();
    for (int testCase = 1; testCase <= testCaseCount; testCase++) {
        setTestCase(testCase);
        int n = inf.readInt(1, 300'000, "n");
        inf.readEoln();
        string s = inf.readToken("[a-z]{1, 300000}", "s");
        inf.readEoln();
        vector<int> a = inf.readInts(n, 1, 1'000'000'000, "a");
        inf.readEoln();
    }
    inf.readEof();
    return 0;
}