#include <iostream>

using namespace std;

int main() {
	int16_t a, b;

	cin >> a >> b;

	if (a > b) {
		cout << '>';
	}
	else if (a < b) {
		cout << '<';
	}
	else {
		cout << "==";
	}

	return 0;
}
