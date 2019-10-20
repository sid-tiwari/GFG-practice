//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Prime number of set bits

TC - O(r-l)
SC - O(1)

EBTC - O(r-l)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int n) {//since 100000 requires 17 bits 
					  //to be represented no need to 
					  //check higher prime numbers
	if (n == 2 || n == 3 || n == 5 || n == 7
		|| n == 11 || n == 13 || n == 17) {
		return true;
	}
	return false;
}

int countSetBits(int n) {
	int count = 0;
	while (n > 0) {
		n = n & (n-1);
		count += 1;
	}
	return count;
}

int main() {
	int t, l, r;

	vector <bool> has_prime_bits(100001, false);

	for (int i = 1; i <= 100000; i++) {
		if (is_prime(countSetBits(i))) {
			has_prime_bits[i] = true;
		}
	}

	cin >> t;
	while (t--) {
		cin >> l >> r;

		int count = 0;
		for (int i = l; i <= r; i++) {
			if (has_prime_bits[i]) {
				count += 1;
			}
		}
		cout << count << '\n';
	}

	return 0;
}