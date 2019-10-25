//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Count substrings

TC - O(|s|)
SC - O(1)

EBTC - O(|s|)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>

using namespace std;

int main() {
	int t;
	
	cin >> t;
	while (t--) {
		string s;
		cin >> s;

		int n = 0; //count of 1's
		for (char c : s) {
			if (c == '1')
				n += 1;
		}
		//answer = nC2
		cout << n * (n-1) / 2 << '\n';
	}
	return 0;
}
