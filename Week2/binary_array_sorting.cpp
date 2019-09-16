//-------------------------------------------------
/*
Problem - Binary array sorting

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
		
		int l = 0, r = n - 1;
		while (l < r) {
			if (v[l] == 0) {
				l++;
				if (v[r] == 1) r--; //0 and 1 both at ideal positions
			}
			else {
				if (v[r] == 1) r--; //only 1 at ideal position
				else swap(v[l], v[r]); //both at unwanted positions
			}
		}

		for (int j = 0; j < n-1; j++)
			cout << v[j] << ' ';
		cout << v[n-1] << '\n';

		v.clear();
	}

	return 0;
}