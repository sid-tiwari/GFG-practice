//-------------------------------------------------
/*
Problem - Greater on right side

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
	int t, n, e;
	vector <int> v;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> e;
			v.push_back(e);
		}
		int max = v[n-1];
		int temp;
		for (int j = n-2; j >= 0; j--) {
			if (v[j] > max) {
				temp = v[j];
				v[j] = max;
				max = temp;
			}
			else
				v[j] = max;
		}

		for (int j = 0; j < n-1; j++) {
			cout << v[j] << ' ';
		}		
		cout << "-1\n";
		v.clear();
	}

	return 0;
}