//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Maximum value in a bitonic array

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
		int mid;

		if (v[n-1] > v[n-2]) {	//array monotonically increasing
			cout << v[n-1] << '\n';
		}
		else if (v[0] > v[1]) {	//array monotonically decreasing
			cout << v[0] << '\n';
		}
		else {
			while (low < high) {
				mid = (low + high) / 2;
				if (v[mid] > v[mid+1]) {
					if (v[mid] > v[mid-1]) {
						break;
					}
					else {
						high = mid;	
					}
				}
				else {
					low = mid;
				}
			}
			cout << v[mid] << '\n';
		}

		v.clear();
	}

	return 0;
}