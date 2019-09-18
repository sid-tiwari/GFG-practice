//-------------------------------------------------
/*
Problem - Find the odd occurence

TC - O(n)
SC - O(n)	-> hashmap

EBTC - O(n)
EBSC - O(1)	-> bitwise XOR
*/
//-------------------------------------------------

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	int t;
	int n, e;
	vector <int> v;
	map <int, int> m;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> e;
			v.push_back(e);
		}
		for (int j = 0; j < n; j++) {
			if (m.count(v[j]) > 0) {
				m[v[j]] += 1;
			}
			else
				m[v[j]] = 1;
		}
		int flag = 0;
		for (auto itr = m.begin(); itr != m.end(); itr++) {
			if (itr->second % 2 != 0) {
				cout << itr->first << '\n';
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			cout << "0\n";
		}
		
		v.clear();
		m.clear();
	}

	return 0;
}