//-------------------------------------------------
/*
Problem - Find the highest number

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
		int mid = 0;
		while (low <= high) {
			mid = (low + high) / 2;

			//corner cases: fully ascending or descending array
			if ((mid == 0 && high == 0) || (mid == n - 1 && low == n - 1)) {
				break;
			}

			//peak
			if (v[mid-1] < v[mid] && v[mid+1] < v[mid])
				break;

			else	//ascending peak
				if (v[mid-1] < v[mid] && v[mid] < v[mid+1])
					low = mid + 1;
				else //descending peak
					if (v[mid-1] > v[mid] && v[mid] > v[mid+1])
						high = mid - 1;
		}

		cout << v[mid] << '\n';

		v.clear();
	}

	return 0;
}