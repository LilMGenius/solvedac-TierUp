#include <iostream>

using namespace std;

int main() {
	while (true) {
		uint16_t a, b, c;
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0) break;
		if (a == 0 || b == 0 || c == 0) {
			cout << "wrong\n";
			continue;
		}

		uint16_t aa = a * a;
		uint16_t bb = b * b;
		uint16_t cc = c * c;

		if (aa + bb == cc || aa + cc == bb || bb + cc == aa)
			cout << "right\n";
		else
			cout << "wrong\n";
	}

	return 0;
}
