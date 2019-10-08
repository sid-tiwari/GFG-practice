//-------------------------------------------------
/*
Problem - Count zero

TC - O(d)
SC - O(1)

EBTC - O(d)		//for exacty d digits O(1)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t, d;
	unsigned long long count;
	cin >> t;
	while (t--) {
		cin >> d;
		count = 0;
		for (int i = 1; i <= d; i++) {
			//for i, all i-digit numbers - i-digit nos. without 0's
			count += (9 * pow(10, i - 1) - pow(9, i));
		}
		cout << count << '\n';
	}

	return 0;
}