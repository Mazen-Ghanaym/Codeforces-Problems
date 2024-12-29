#include "testlib.h"
using namespace std;

// inf - stream with the testdata.
#define ll long long
int main(int argc, char *argv[])
{
    registerValidation(argc, argv);
    int testCaseCount = 1;
    // make comment on the next two line if the problem single test case
    //testCaseCount = inf.readInt(1, 100, "TestCase");
    //inf.readEoln();
    for (int testCase = 1; testCase <= testCaseCount; testCase++)
    {
        setTestCase(testCase);
        string s = inf.readLine();
        ensuref(s.size() >= 1 && s.size() <= 100000, "s.size() must be between 1 and 100");
        for (int i = 0; i < s.size(); i++)
        {
            ensuref((s[i] >= 'a' && s[i] <= 'z') || s[i] == '?', "s[i] must be between 'a' and 'z'");
        }
        string t= inf.readLine();
        ensuref(t.size() >= 1 && t.size() <= 100000, "t.size() must be between 1 and 100");
        for (int i = 0; i < t.size(); i++)
        {
            ensuref((t[i] >= 'a' && t[i] <= 'z') || t[i] == '?', "t[i] must be between 'a' and 'z'");
        }
    }
    inf.readEof();
    return 0;
}