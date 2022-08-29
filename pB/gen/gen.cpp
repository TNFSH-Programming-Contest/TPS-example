#include <bits/stdc++.h>

#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);

	int n = atoi(argv[1]);

	int A = rnd.next(0, n - 1);
	int B = rnd.next(A + 1, n);

	cout << A << " " << B << endl;

	return 0;
}
