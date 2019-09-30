//-------------------------------------------------
/*
Problem - Searching element in sorted array

TC - O(logn)
SC - O(1)

EBTC - O(logn)
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
	for (int i = 0; i < t; i++) {
		cin >> n >> k;
		for (int j = 0; j < n; j++) {
			cin >> e;
			v.push_back(e);
		}
		int mid, low = 0, high = n - 1;
		int flag = -1;	//element not present
		while (low <= high) {
			mid = (low + high) / 2;
			if (v[mid] == k) {
				flag = 1;
				break;
			}
			else
				if (v[mid] < k)
					low = mid + 1;
				else
					high = mid - 1;
		}
		cout << flag << '\n';
		v.clear();
	}
	return 0;
}