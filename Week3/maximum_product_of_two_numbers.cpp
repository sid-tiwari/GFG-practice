//-------------------------------------------------
/*
Problem - Maximum product of two numbers

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
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> e;
			v.push_back(e);
		}

		int max1 = v[0];	//largest
		int max2 = v[1];	//2nd largest
		if (max1 < max2) swap(max1, max2);

		for (int j = 2; j < n; j++) {
			if (v[j] > max1) {
				max2 = max1;
				max1 = v[j];
			}
			else if (v[j] > max2) {
				max2 = v[j];
			}
		}

		cout << max1 * max2 << '\n';

		v.clear();
	}

	return 0;
}