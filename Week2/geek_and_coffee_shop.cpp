//-------------------------------------------------
/*
Problem - Geek and Coffee Shop

TC - O(1)
SC - O(1)

EBTC - O(1)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
	unsigned long long n, m;
	int result;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> m;
		result = (n / pow(2, m-1));
		cout << result << '\n';
	}

	return 0;
}