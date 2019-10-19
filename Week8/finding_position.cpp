//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Finding position

TC - O(log n)
SC - O(1)

EBTC - O(log n)	 -> using bit shift	#TODO
EBSC - O(1)
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
		
		cout << pow(2, floor(log2(n))) << '\n';
	}

	return 0;
}