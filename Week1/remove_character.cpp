//-------------------------------------------------
/*
Problem - Remove character

TC - O(|s1|+|s2|)
SC - O(1)

EBTC - O(|s1|+|s2|)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int t;
	string s1, s2;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> s1;
		cin >> s2;
		
		for (char c : s2) {
			s1.erase(remove(s1.begin(), s1.end(), c), s1.end());
		}

		cout << s1 << '\n';
	}

	return 0;
}