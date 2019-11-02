//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Move all zeroes to end of array

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

		for (int i = 0; i < n; i++) {
			if (v[i] == 0) {
				v.erase(v.begin() + i);
				i -= 1;
				n -= 1;
				v.push_back(0);
			}
		}

		n = v.size();
		for (int i = 0; i < n; i++) {
			cout << v[i] << ' ';
		}
		cout << '\n';

		v.clear();
	}
	return 0;
}
