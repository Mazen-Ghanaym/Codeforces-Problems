#include "testlib.h"
using namespace std;

// inf - stream with the testdata.

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int testCaseCount = 1;
    // make comment on the next two line if the problem single test case
    //testCaseCount = inf.readInt(1, 1000'000, "TestCase");
    //inf.readEoln();
    for (int testCase = 1; testCase <= testCaseCount; testCase++) {
        setTestCase(testCase);
        int n=inf.readInt(1,100000,"n");
        inf.readEoln();
        vector<int> a(n);
        for(int i=0;i<n;i++){
            a[i]=inf.readInt(1,1000000000,"a[i]");
            if(i!=n-1)
                inf.readSpace();
        }
        inf.readEoln();
        int q=inf.readInt(1,100000,"q");
        inf.readEoln();
        for(int i=0;i<q;i++){
            int l=inf.readInt(1,n,"l");
            inf.readSpace();
            int r=inf.readInt(l,n,"r");
            inf.readEoln();
        }
    }
    inf.readEof();
    return 0;
}
