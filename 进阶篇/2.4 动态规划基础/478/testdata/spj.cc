#include "testlib.h"
#include <string>
int a[205], b[205];
int main(int argc, char *argv[])
{
    setName("lis");
    registerTestlibCmd(argc, argv);
    //检查长度
    std::string ansLenS = ans.readWord();
    std::string outLenS = ouf.readWord();
    int ansLen, outLen;
    ansLen = outLen = 0;
    for (int i = 4; i < ansLenS.length(); i++)
        ansLen = ansLen * 10 + ansLenS[i] - '0';
    for (int i = 4; i < outLenS.length(); i++)
        outLen = outLen * 10 + outLenS[i] - '0';
    if (ansLen != outLen)
        quitf(_wa, "max= %d, found %d", ansLen, outLen);
    if (ansLenS != outLenS)
        quitf(_wa, "Format Error");
    //检查序列
    int n = inf.readInt();
    for (int i = 1; i <= n; i++)
        a[i] = inf.readInt();
    int m = outLen;
    for (int i = 1; i <= m; i++)
        b[i] = ouf.readInt();
    //检查是否不下降
    for (int i = 2; i <= m; i++)
        if (b[i] < b[i - 1])
            quitf(_wa, "Sequence Error");
    //检查是否是子序列
    for (int i = 1, j = 1; i <= n; i++)
    {
        while (j <= n && a[j] != b[i])
            j++;
        if (a[j] != b[i])
            quitf(_wa, "Sequence Error");
    }
    quitf(_ok, "Good");
}