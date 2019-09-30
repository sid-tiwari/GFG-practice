//-------------------------------------------------
/*
Problem - Immediate smaller element

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
		for (int j = 0; j < n - 1; j++) {
			if (v[j] > v[j+1]) cout << v[j+1] << ' ';
			else cout << "-1 ";
		}
		cout << "-1\n";
		v.clear();
	}
	return 0;
}