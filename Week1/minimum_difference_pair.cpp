//-------------------------------------------------
/*
Problem - Minimum Difference Pair

TC - O(nlogn)
SC - O(1)

EBTC - O(nlogn)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t, n, e;
	int dif, temp;
	vector <int> v;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> e;
			v.push_back(e);
		}
		
		sort(v.begin(), v.end());

		dif = 100001; //1 <= v[j] <= 100000 => minimum dif < 100000
		for (int j = 0; j < n - 1; j++) {
			temp = v[j+1] - v[j];
			if (temp < dif)
				dif = temp;
		}

		cout << dif << '\n';
		v.clear();
	}

	return 0;
}