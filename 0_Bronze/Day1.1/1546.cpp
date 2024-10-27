#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.precision(14);

	short n;
	cin >> n;

	short score[1000];
	short m = 0;
	for (short i = 0; i < n; i++) {
		cin >> score[i];
		if (score[i] > m) {
			m = score[i];
		}
	}

	double sum = 0;
	for (short i = 0; i < n; i++) {
		sum += (double)score[i] / m * 100;
	}

	cout << fixed << sum / n;

	return 0;
}
