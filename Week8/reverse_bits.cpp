//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Reverse bits

TC - O(logn)
SC - O(1)

EBTC - O(logn)		//O(1) with lookup table
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	int t;
	unsigned long long int n, res;

	cin >> t;
	while (t--) {
		cin >> n;
		res = 0;
		int i = 0;
		while (n > 0) {
			res += ((n % 2) * pow(2, 31-i));
			n /= 2;
			i += 1;
		}
		cout << res << '\n';
	}

	return 0;
}