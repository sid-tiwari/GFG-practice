//-------------------------------------------------
/*
Problem - Sum of numbers in string

TC - O(n)
SC - O(1)

EBTC - O(n)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	string str;
	int total, current, digit;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> str;
		total = 0, current = 0;
		for (char c : str) {
			if (isdigit(c)) {
				digit = c - '0';
				current = current * 10 + digit;
			}
			else {
				total += current;
				current = 0;
			}
		}
		total += current;
		cout << total << '\n';
	}

	return 0;
}