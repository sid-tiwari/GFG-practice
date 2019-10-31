//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Swapping pairs make sum equal

TC - O(n+m)
SC - O(n)

EBTC - O(n+m)
EBSC - O(n)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
	int t, n, m, e;
	vector <int> v1, v2;
	unordered_map <int, int> mp; 

	cin >> t;
	while (t--) {
		cin >> n >> m;
		
		int sum1 = 0, sum2 = 0;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v1.push_back(e);
			sum1 += e;
			if (mp.count(e) > 1)
				mp[e] += 1;
			else
				mp[e] = 1;
		}

		for (int i = 0; i < m; i++) {
			cin >> e;
			v2.push_back(e);
			sum2 += e;
		}

		int flag = -1;
		int diff = (sum1 - sum2);

		if (diff % 2 == 0) {
			diff /= 2;
			for (int e : v2) {
				if (mp.count(e + diff) > 0) {
					flag = 1;
					break;
				}
			}
		}	

		cout << flag << '\n';

		mp.clear();
		v2.clear();
		v1.clear();
	}
	return 0;
}
