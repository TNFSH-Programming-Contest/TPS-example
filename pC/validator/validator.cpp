#include "testlib.h"
using namespace std;

const long long MAXN = 1e12 + 1;

int main() {
	registerValidation();
	// about testlib, see https://codeforces.com/blog/entry/18291

	inf.readDouble(0, MAXN, "A");
	inf.readSpace();
	inf.readDouble(0, MAXN, "B");
	inf.readSpace();
	inf.readDouble(0, MAXN, "C");
	inf.readEoln();
	inf.readEof();

	return 0;
}
