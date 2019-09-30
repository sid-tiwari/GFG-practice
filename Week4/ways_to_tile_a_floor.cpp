//-------------------------------------------------
/*
Problem - Ways to tile a floor

TC - O(w)
SC - O(1)

EBTC - O(1) -> using fibonacci formula #TODO
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>

using namespace std;

int main() {
	int t, w;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> w;
		//#ways for tiling 2xW = #ways for 2x(W-1) + #ways for 2x(W-2)
		unsigned long long a = 1; //#ways for tiling 2x1
		unsigned long long b = 2; //#ways for tiling 2x2
		if (w == 1) {
			cout << a << '\n';
			continue;
		}

		if (w == 2) {
			cout << b << '\n';
			continue;
		}

		for (int i = 3; i <= w; i++) {
			b = b + a;	//i-th term of series
			a = b - a; //now a = b
		}
		cout << b << '\n';
	}
	return 0;
}