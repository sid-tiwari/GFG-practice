//-------------------------------------------------
/*
Problem - Number of occurences

TC - O(logn + count)
SC - O(1)

EBTC - O(logn)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n, e, x;
	vector <int> v;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> x;
		for (int j = 0; j < n; j++) {
			cin >> e;
			v.push_back(e);
		}

		int low = 0, high = n - 1;
		int mid = 0;
		while (low <= high) {
			mid = (low + high) / 2;
			if (v[mid] < x) low = mid + 1;
			else if (v[mid] > x) high = mid - 1;
			else break;
		}

		if (v[mid] == x) {
			int l = mid - 1, r = mid + 1;
			while (v[l] == x || v[r] == x) {
				if (v[l] == x) l--;
				if (v[r] == x) r++;	//expanding in both directions
			}
			cout << (r - l - 1) << '\n';
		}
		else {	//not found
			cout << "-1\n";
		}

		v.clear();
	}

	return 0;
}