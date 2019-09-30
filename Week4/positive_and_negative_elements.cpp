//-------------------------------------------------
/*
Problem - Positive and negative elements

TC - O(n)
SC - O(n)

EBTC - O(n)
EBSC - O(n)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n, e;
	
	vector <int> pos, neg;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> e;
			if (e >= 0) pos.push_back(e);
			else neg.push_back(e);
		}
		for (int j = 0; j < n / 2; j++) {
			cout << pos[j] << ' ' << neg[j] << ' ';
		}
		cout << '\n';
		pos.clear();
		neg.clear();
	}
	return 0;
}