#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
		
	int tSize[6];
	for (int i = 0; i < 6; i++) {
		cin >> tSize[i];
	}

	int t, p;
	cin >> t >> p;

	int tBundle = 0;
	for (int i = 0; i < 6; i++) {
		int b = (tSize[i] / t) + 1;
		if (tSize[i] % t == 0) {
			b--;
		}
		tBundle += b;
	}

	int pBundle = N / p;
	int pRemain = N % p;

	cout << tBundle << '\n' << pBundle << ' ' << pRemain;

	return 0;
}
