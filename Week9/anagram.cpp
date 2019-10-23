//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Anagram

TC - O(|s|)
SC - O(1)

EBTC - O(|s|)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int t;
	int chars[26];
	typedef unsigned long long int ull;

	cin >> t;
	while (t--) {
		string s1, s2;
		cin >> s1;
		cin >> s2;

		ull len = s1.length();
		if (len != s2.length()) {
			cout << "NO\n";
			continue;
		}

		memset(chars, 0, sizeof(chars));

		for (ull i = 0; i < len; i++) {
			chars[s1[i]-'a'] += 1;
			chars[s2[i]-'a'] -= 1;
		}

		int flag = true;
		for (int val : chars) {
			if (val) {
				flag = false;
				break;
			}
		}

		if (flag) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}