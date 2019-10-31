//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Minimum number or squares

TC - O(n^1.5)	#TODO Alt. soln: Lagrange 4-square theorem
SC - O(n)

EBTC - O(n^1.5)
EBSC - O(n)
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
		int table[n+1];

		table[0] = 0;
		table[1] = 1;

		for (int i = 2; i <= n; i++) {
			table[i] = i; //max possible value if all 1s chosen
			for (int j = 1; j <= ceil(sqrt(i)); j++) {
				if (j * j > i)
					break;
				else
					table[i] = min(table[i], 1 + table[i-j*j]);
			}
		}
		cout << table[n] << '\n';
	}
	return 0;
}
