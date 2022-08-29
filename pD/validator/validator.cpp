#include "testlib.h"
using namespace std;

const int MAXN = 1000;

int main() {
	registerValidation();
	// about testlib, see https://codeforces.com/blog/entry/18291

	// TODO
	inf.readInt(0, MAXN, "A");
	inf.readSpace();
	inf.readInt(0, MAXN, "B");
	inf.readEoln();
	inf.readEof();

	return 0;
}
