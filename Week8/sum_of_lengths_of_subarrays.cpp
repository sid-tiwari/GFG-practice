//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Sum of lengths of non-overlapping subarrays

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
	int t, n, k, e;
	vector <int> v;

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v.push_back(e);
		}
		cin >> k;

		int total = 0, current = 0;
		bool flag = false;
		for (int i = 0; i < n; i++) {
			if (v[i] <= k) {
				if (v[i] == k) {
					flag = true;
				}
				current += 1;
			}
			else {
				if (flag) {	//subarray considered only if k present in it
					total += current;
				}
				current = 0;
				flag = false;
			}
		}
		if (flag) {
			total += current;
		}
		cout << total << '\n';

		v.clear();
	}

	return 0;
}