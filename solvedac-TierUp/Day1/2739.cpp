#include <iostream>

using namespace std;

int main() {
	int16_t n;
	cin >> n;
	for (int16_t i = 1; i <= 9; i++) {
		cout << n << " * " << i << " = " << n * i << "\n";
	}
	return 0;
}
