#include <cmath>
#include <iostream>

using namespace std;

int main() {
	double y, x;
	cout << "Enter x: ";
	cin >> x;
	if (x > 1) {
		y = exp(-x) + fabs(pow(x, 2) - 1);
	} else if (x > (-M_PI) && x <= 1) {
		y = log10(sqrt(fabs(1 - x)));
	} else {
		cout << "Unknown error!" << endl;
		y = 0;
	}
	cout << "Result: " << y << endl;
}
