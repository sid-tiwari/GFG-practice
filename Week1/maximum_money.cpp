//-------------------------------------------------
/*
Problem - Maximum money

TC - O(1)
SC - O(1)

EBTC - O(1)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>

using namespace std;

int main() {
	int t, n, m;
	int result;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cin >> m;
		if (n % 2 == 0) {
			result = m * n / 2;
		}
		else {
			result = m * (n / 2 + 1);
		}
		cout << result << '\n';
	}

	return 0;
}