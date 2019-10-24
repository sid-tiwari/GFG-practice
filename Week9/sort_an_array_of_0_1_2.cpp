//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Sort an array of 0s, 1s and 2s

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
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v.push_back(e);
		}

		int count0 = 0, count1 = 0, count2 = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] == 0) count0 += 1;
			else if (v[i] == 1) count1 += 1;
			else count2 += 1;
		}

		for (int i = 0; i < count0; i++) 
			cout << "0 ";
		for (int i = 0; i < count1; i++)
			cout << "1 ";
		for (int i = 0; i < count2; i++)
			cout << "2 ";
		cout << '\n';
		
		v.clear();
	}

	return 0;
}