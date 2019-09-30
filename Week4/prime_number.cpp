//-------------------------------------------------
/*
Problem - Prime number

TC - O(n^0.5)
SC - O(1)

EBTC - O(n^0.5)	-> not using any probabilistic methods
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>

using namespace std;

int main() {
	int t;
	int n;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		int flag = 0; //prime
		if (n == 1) {
			cout << "No\n";
		}
		else {
			for (int j = 2; j*j <= n; j++) {
				if (n % j == 0) {
					flag = 1;	//not prime
					break;
				}
			}
			if (flag) {
				cout << "No\n";
			}
			else {
				cout << "Yes\n";
			}
		}
	}
	return 0;
}