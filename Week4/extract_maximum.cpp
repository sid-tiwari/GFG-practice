//-------------------------------------------------
/*
Problem - Extract maximum

TC - O(n)
SC - O(1)

EBTC - O(n)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>

using namespace std;

int main() {
	int t;
	int current, digit, max;

	cin >> t;
	for (int i = 0; i < t; i++) {
		string str;
		cin >> str;
		current = 0, max = 0;
		for (char c : str) {
			if (isdigit(c)) {
				digit = c - '0';
				current = 10 * current + digit;
			}
			else {
				if (current) {
					if (current > max) max = current;
				}
				current = 0;
			}
		}
		if (current > max) max = current;
		cout << max << '\n';
	}
	return 0;
}