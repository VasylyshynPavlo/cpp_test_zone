#include <iostream>

using namespace std;

int main() {
	double a, b, c, avg_, max_;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	avg_ = (a + b + c) / 3;
	max_ = a > b ? a : b;
	max_ = max_ > c ? max_ : c;
	cout << "Avg: " << avg_ << endl;
	cout << "Max: " << max_ << endl;
	cout << "Differend between avg and max: " << avg_ - max_ << endl;
	return 0;
}
