//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Remove all duplicates from a given string

TC - O(n)
SC - O(1)	since map will be bounded by total no. of alphabets
			a-z and A-Z

EBTC - O(n)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <cctype>
#include <unordered_map>

using namespace std;

int main() {
	int t, n;
	unordered_map <char, bool> mp;

	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		n = str.length();

		for (int i = 0; i < n; i++) {
			if (mp.count(str[i])) {
				str.erase(i, 1);
				i -= 1;
				n -= 1;
			}
			else {
				mp[str[i]] = true;
			}
		}
		cout << str << '\n';
		mp.clear();
	}

	return 0;
}