#include "testlib.h"
int main(int argc, char *argv[])
{
    setName("compares two double");
    registerTestlibCmd(argc, argv);
    double userOutput = ouf.readDouble();
    double ansOutput = ans.readDouble();
    if (abs(ansOutput - userOutput) <= 1e-6)
        quitf(_ok, "AC! %.12f", userOutput);
    else
        quitf(_wa, "WA! %.12f", userOutput);
}