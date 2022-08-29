#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b, c;

	cin >> a >> b >> c;

	double d = a * b;
	d /= c;

	cout << fixed << setprecision(8) << d << endl;

	return 0;
}
