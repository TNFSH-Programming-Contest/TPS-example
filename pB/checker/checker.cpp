#include <bits/stdc++.h>

#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerChecker("pB", argc, argv);

	int A = inf.readInt();
	int B = inf.readInt();

	int ans = ouf.readInt();

	if (ans % 2 != 0) {
		quitf(_wa, "The answer is not even.");
	}

	if (ans < A || ans > B) {
		quitf(_wa, "The answer is not in the range.");
	}

	quitf(_ok, "The answer is correct.");

	return 0;
}
