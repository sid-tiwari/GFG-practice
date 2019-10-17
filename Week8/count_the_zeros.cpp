//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Count the zeros

TC - O(log n)
SC - O(1)

EBTC - O(log n)
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

		int low = 0, high = n - 1;
		int mid, pos = -1;

		while (low <= high) {
			mid = (low + high) / 2;
			if (v[mid] == 0) {
				if (v[mid-1] == 1 || mid == low) {
					pos = mid;
					break;
				}
				else {
					high = mid - 1;
				}
			}
			else {
				if (v[mid+1] == 0) {
					pos = mid + 1;
					break;
				}
				else {
					low = mid + 1;
				}
			}
		}
		if (pos == -1) {
			cout << "0\n";
		}
		else {
			cout << n - pos << '\n';
		}
		v.clear();
	}

	return 0;
}