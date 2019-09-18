//-------------------------------------------------
/*
Problem - Substrings with similar first and last characters

TC - O(n)
SC - O(1) -> maximum 26 entries in map

EBTC - O(n)
EBSC - O(1) 
*/
//-------------------------------------------------

#include <iostream>
#include <map>

using namespace std;

int main() {
	int t;
	int n;
	map <char, int> m;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		string str;
		cin >> str;
		for (int j = 0; j < n; j++) {
			if (m.count(str[j]) > 0) {
				m[str[j]] += 1;
			}
			else {
				m[str[j]] = 1;
			}
		}

		int total = 0, count = 0;
		for (auto itr = m.begin(); itr != m.end(); itr++) {
			count = itr->second;
			total += (count * (count + 1)) / 2;
			//if frequency = n, no. of ways of choosing = 1 + 2 + ...+ n
		}
		cout << total <<'\n';
		m.clear();
	}
	return 0;
}