//-------------------------------------------------
/*
Problem - Intersection of two arrays

TC - O(n+m)
SC - O(n)

EBTC - O(n+m)
EBSC - O(n)
*/
//-------------------------------------------------

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t, n, m, e;
	map <int, int> mp;
	vector <int> v1, v2;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> m;
		for (int j = 0; j < n; j++) {
			cin >> e;
			v1.push_back(e);
		}
		for (int j = 0; j < m; j++) {
			cin >> e;
			v2.push_back(e);
		}

		for (int j = 0; j < n; j++) {
			if (mp.count(v1[j]) == 0) mp[v1[j]] = 1;
		}
		for (int j = 0; j < m; j++) {
			if (mp.count(v2[j]) == 1) mp[v2[j]] = 2;
		}

		int count = 0;
		for (auto itr = mp.begin(); itr != mp.end(); itr++) {
			if (itr->second == 2)
				count++;
		}
		cout << count << '\n';
		v1.clear();
		v2.clear();
		mp.clear();
	}

	return 0;
}