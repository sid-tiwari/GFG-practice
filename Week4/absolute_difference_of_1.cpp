//-------------------------------------------------
/*
Problem - Absolute difference of 1

TC - O(nlogn)
SC - O(1)

EBTC - O(nlogn)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int t, n, flag, count;
	long long k, temp, e;
	
	vector <long long> v;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> k;
		for (int j = 0; j < n; j++) {
			cin >> e;
			v.push_back(e);
		}

		count = 0;
		for (int j = 0; j < n; j++) {
			if (v[j] < k) {
				temp = v[j], flag = 0;
				while (temp > 9) {
					flag = 1; 
					if (llabs(temp % 10 - (temp / 10) % 10) != 1l) {
						flag = 0; //not as required
						break;
					}
					temp /= 10;
				}
				if (flag) {
					cout << v[j] << ' ';
					count++;
				}
			}
		}
		if (!count) cout << "-1";
		cout << '\n';
		v.clear();	
	}
	return 0;
}