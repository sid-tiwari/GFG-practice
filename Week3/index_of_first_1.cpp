//-------------------------------------------------
/*
Problem - Index of first 1 in sorted array of 0's and 1's

TC - O(log n)	-> assuming input is taken completely first
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
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> e;
			v.push_back(e);
		}
		int index = -1;
		int low = 0, high = n - 1;
		int mid = 0;
		while (low <= high) {
			mid = (low + high) / 2;
			if (v[mid] == 1) {
				if (mid == 0) {
					index = 0;
					break;
				}
				else {
					if (v[mid-1] == 0) {
						index = mid;
						break;
					}
					else {  //more 1's present to the left
						high = mid - 1;
					}
				}
			}
			else {
				if (mid == n - 1) {
					index = -1; //no 1's present since last element is 0
					break;
				}
				else {
					if (v[mid+1] == 1) {
						index = mid + 1;
						break;
					}
					else {
						low = mid + 1; //more 0's present to the right
					}
				}
			}
		}
		cout << index << '\n';
		v.clear();
	}
	return 0;
}