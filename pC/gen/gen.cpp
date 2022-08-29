#include <bits/stdc++.h>

#include "testlib.h"
using namespace std;

const long long _1E12 = 1e12;
const long long _1E6 = 1e6;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);

	cout << rnd.next(1LL, _1E12) << ".";
	cout << rnd.next(1LL, _1E6) << " ";
	cout << rnd.next(1LL, _1E12) << ".";
	cout << rnd.next(1LL, _1E6) << " ";
	cout << rnd.next(1LL, _1E12) << ".";
	cout << rnd.next(1LL, _1E6);
	cout << endl;

	return 0;
}
