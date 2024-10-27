#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a[5], sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		sum += pow(a[i], 2);
	}

	cout << sum % 10;

	return 0;
}
