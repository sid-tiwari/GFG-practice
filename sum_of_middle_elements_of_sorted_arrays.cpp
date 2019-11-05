//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Sum of Middle Elements of two sorted arrays

TC - O(n)
SC - O(1)

EBTC - O(logn)	Comparing medians #TODO
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n, e;
	vector <int> v1, v2;

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v1.push_back(e);
		}
		for (int i = 0; i < n; i++) {
			cin >> e;
			v2.push_back(e);
		}

		int i = 0, j = 0, count = 0, sum = 0;
		while (i < n && j < n) {
			count += 1;
			if (v1[i] < v2[j]) {
				if (count == n)
					sum += v1[i];
				if (count == n + 1) {
					sum += v1[i];
					break;
				}
				i += 1;
			}
			else {
				if (count == n)
					sum += v2[j];
				if (count == n + 1) {
					sum += v2[j];
					break;
				}
				j += 1;
			}
		}
		if (i == n) sum += v2[0];
		if (j == n) sum += v1[0];
		cout << sum << '\n';

		v2.clear();
		v1.clear();
	}
	return 0;
}
