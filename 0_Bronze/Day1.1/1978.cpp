#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int primes = 0;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		if (x == 1) continue;

		bool isPrime = true;
		for (int j = 2; j < x; j++) {
			if (x % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) primes++;
	}

	cout << primes;

	return 0;
}
