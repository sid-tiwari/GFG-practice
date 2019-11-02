//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Left out candies

TC - O(n)
SC - O(1)

EBTC - O(n)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>

using namespace std;

int main() {
	int t, n, m;

	cin >> t;
	while (t--) {
		cin >> n >> m;
		
		int full = n * (n + 1) / 2; //candies for 1 full round
		int rem = m % full; //remaining after all possible full rounds
		int i = 1;
		while (rem >= i) {
			rem -= i;
			i += 1;
		}	
		cout << rem << '\n';
	}
	return 0;
}
