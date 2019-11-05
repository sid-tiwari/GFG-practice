//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Number of 1's in smallest repunit

TC - O(n)	*referred editorial
SC - O(1)

EBTC - O(n)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t, n;

	cin >> t;
	while (t--) {
		cin >> n;

		int count = 1, rem = 1;
		while (rem != 0) {
			rem = (rem * 10 + 1) % n;
			count += 1;
		}
		cout << count << '\n';
	}
	return 0;
}
