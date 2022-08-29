#include <bits/stdc++.h>

#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerChecker("pB", argc, argv);
	// ref: https://codeforces.com/blog/entry/18431

	int pans = ouf.readDouble();
	int jans = ans.readDouble();

	if (fabs(pans - jans) < 0.001) {
		quitf(_ok, "The answer is correct.");
	} else {
		quitf(_wa, "The answer is incorrect.");
	}

	return 0;
}
