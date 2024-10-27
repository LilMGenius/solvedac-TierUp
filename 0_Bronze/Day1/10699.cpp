#include <iostream>
#include <ctime>

using namespace std;

int main() {
	tm t;
	time_t now = time(NULL);
	localtime_s(&t, &now); // localtime_r(&now, &t);

	cout << t.tm_year + 1900 << '-';
	cout.width(2);
	cout.fill('0');

	cout << t.tm_mon + 1 << '-';
	cout.width(2);
	cout.fill('0');

	cout << t.tm_mday;

	return 0;
}
