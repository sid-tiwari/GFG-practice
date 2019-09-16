//-------------------------------------------------
/*
Problem - Count total set bits

TC - O(nlogn) log n -> no. of set bits -> no. of bits
SC - O(1)

EBTC - O(kn)  k = number of bits required to store the number
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
	int t, n;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		int total = 0;
		for (int j = 1; j <= n; j++) {
			total += count_set_bits(j);
		}
		cout << total << '\n';
	}

	return 0;
}