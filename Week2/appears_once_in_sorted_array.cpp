//-------------------------------------------------
/*
Problem - Find the element that appears once in sorted array

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
	int t, n, e;
	vector <int> v;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> e;
			v.push_back(e);
		}
		int low = 0, high = n - 1;
		int mid;
		while (low <= high) {
			mid = (low + high) / 2;
			if (mid % 2 == 1) {	
				if (v[mid] == v[mid+1])
					high = mid - 1;
				else if (v[mid] == v[mid-1])
					low = mid + 1;
				else
					break;
			}
			else {
				if (v[mid] == v[mid-1])
					high = mid - 1;
				else if (v[mid] == v[mid+1])
					low = mid + 1;
				else
					break;
			}
		}
		cout << v[mid] << '\n';
		v.clear();
	}

	return 0;
}