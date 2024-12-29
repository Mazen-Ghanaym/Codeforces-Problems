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
        //setTestCase(testCase);
        int n=inf.readInt(1,2e5,"n");
        inf.readEoln();
        vector<int> a(n);
        a=inf.readInts(n,1,1e9,"a");
        inf.readEoln();
        int q=inf.readInt(1,2e5,"q");
        inf.readEoln();
        for(int i=0;i<q;i++){
            int d=inf.readInt(1,n,"d");
            inf.readSpace();
            int x=inf.readInt(1,n,"x");
            inf.readSpace();
            int y=inf.readInt(1,1e9,"y");
            inf.readEoln();
        }
    }
    inf.readEof();
    return 0;
}