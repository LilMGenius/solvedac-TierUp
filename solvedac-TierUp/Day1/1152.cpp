#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	getline(cin, s); // read a line of text

	// if word is empty or only contains space
	// then it is not a word

	if (s.empty() || s == " ") {
		cout << 0;
		return 0;
	}

	int words = 1;

	for (int i = 0; i < s.length(); i++) {

		// if first/last character is space
		// then it don't count as a word

		if (i == 0 && s[i] == ' ') {
			continue;
		}
		else if (i == s.length() - 1 && s[i] == ' ') {
			continue;
		}

		// count words

		if (s[i] == ' ') {
			words++;
		}
	}

	cout << words;
	return 0;
}
