#include <iostream>

using namespace std;

int main() {
	double k, l, p, q, r;
	cout << "Enter group number(k): ";
	cin >> k;
	cout << "Enter vatiant(l): ";
	cin >> l;
	p = (l - 2 * k) / 4;
	q = (l + k) / k;
	r = l * k - 12;
	if (p >= 0) cout << "p = " << 3 * p << endl;
	if (q >= 0) cout << "q = " << 3 * q << endl;
	if (r >= 0) cout << "r = " << 3 * r << endl;
	if (p < 0 && q < 0 && r < 0) cout << "These nothing to do" << endl;
};
