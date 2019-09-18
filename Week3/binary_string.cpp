//-------------------------------------------------
/*
Problem - Binary String

TC - O(n)
SC - O(1)

EBTC - O(n)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int t, n;

	cin >> t;
	for (int i = 0; i < t; i++) {
		string str;
		cin >> n;
		cin >> str;
		int x = count(str.begin(), str.end(), '1');
		if (x < 2) {
			cout << "0\n";
		}
		else {
			cout << x * (x - 1) / 2 << '\n';
			// == xC2 -> choose two 1's for start and end of substring
		}
	}
	return 0;
}