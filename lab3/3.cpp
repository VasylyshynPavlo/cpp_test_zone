#include <iostream>

#include "math.h"

using namespace std;

int main() {
	double x, y;
	const double r = sqrt(2 / 2);
	cout << "Enter M(x): ";
	cin >> x;
	cout << "Enter M(y): ";
	cin >> y;
	if (pow(x, 2) + pow(y, 2) <= pow(r, 2))
		cout << "M belongs to circle" << endl;
	else
		cout << "M not belongs to circle" << endl;
}
