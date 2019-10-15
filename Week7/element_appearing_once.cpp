//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Element appearing once

TC - O(n)
SC - O(1)

EBTC - O(n)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n, e;
	vector <int> v;

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v.push_back(e);
		}

		int result = v[0];
		for (int i = 1; i < n; i++) {
			result ^= v[i];
		}

		cout << result << '\n';

		v.clear();
	}

	return 0;
}