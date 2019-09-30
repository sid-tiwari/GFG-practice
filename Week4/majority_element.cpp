//-------------------------------------------------
/*
Problem - Majority element

TC - O(n)
SC - O(n)

EBTC - O(n)
EBSC - O(1)	-> Moore's voting algo #TODO
*/
//-------------------------------------------------

#include <iostream>
#include <map>

using namespace std;

int main() {
	int t, n, e;
	
	map <int, int> m;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> e;
			if (m.count(e) > 0) m[e] += 1;
			else m[e] = 1;
		}
		int flag = 0; //no majority element
		for (auto itr = m.begin(); itr != m.end(); itr++) {
			if (itr->second > n/2) {
				flag = 1;
				cout << itr->first << '\n';
				break;
			}
		}
		if (!flag) cout << "-1\n";
		m.clear();
	}
	return 0;
}