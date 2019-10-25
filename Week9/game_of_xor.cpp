//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Game of XOR

TC - O(n)	 *referred editorial
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
		

		int count, result = 0;
		for (int i = 0; i < n; i++) {
			count = (i + 1) * (n - i);
			if (count % 2 == 1) {	//even count elements become 0 
									//with ^
				result ^= v[i];		//odd count elementstaken once
			}
		}
		cout << result << '\n';
		v.clear();
	}

	return 0;
}