//-------------------------------------------------
/*
Problem - Bit Difference

TC - O(logn)
SC - O(1)

EBTC - O(logn)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>

using namespace std;

//Brian Kernighan's algo O(logn)
int count_set_bits(int n) {
	int count = 0;
	while (n > 0) {
		n = n & (n-1); //unset rightmost set bit
		count++; //when all bits are unset, n = 0
	}
	return count;
}

int main() {
	int t, a, b;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		int res = a ^ b;
		cout << count_set_bits(res) << '\n';
	}

	return 0;
}