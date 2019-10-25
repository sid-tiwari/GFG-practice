//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Smallest subarray with sum greater than x

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
	int t, n, e, x;
	vector <int> v;

	cin >> t;
	while (t--) {
		cin >> n >> x;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v.push_back(e);
		}

		int sum = v[0];
		int minlength = n, length = 1;
		int i = 0, j = 1;
		bool flag = false;

		while (j <= n) {
			if (sum > x) {
				flag = true;
				if (length == 1) {
					minlength = 1;
					break;
				}
				else {
					if (length < minlength)
						minlength = length;
					sum -= v[i];
					length -= 1;
					i += 1;
				}
			}
			else {
				if (j < n) {
					sum += v[j];
					length += 1;
				}
				j += 1;
			}
		}
		if (flag) {
			cout << minlength << '\n';
		}

		v.clear();
	}
	return 0;
}
