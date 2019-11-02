//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Minimum energy

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

		int initial = 1, current = 1;
		for (int i = 0; i < n; i++) {
			current += v[i];
			if (current <= 0) {
				initial += 1 - current;
				current = 1;
			}
		}
		cout << initial << '\n';

		v.clear();
	}
	return 0;
}
