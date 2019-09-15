//-------------------------------------------------
/*
Problem - Twice Counter

TC - O(n)
SC - O(n)

EBTC - O(n)
EBSC - O(n)
*/
//-------------------------------------------------

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	int t, n;
	int result;
	map <string, int> m;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		result = 0;
		for (int j = 0; j < n; j++) {
			string str;
			cin >> str;
			if (m.count(str) > 0) {
				m[str] += 1;
				if (m[str] == 2) result++;
				if (m[str] == 3) result--; //previously assumed to be answer
			}
			else {
				m[str] = 1;
			}
		}
		
		cout << result << '\n';
		m.clear();
	}

	return 0;
}