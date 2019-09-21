//-------------------------------------------------
/*
Problem - Unique numbers

TC - O(nlogn)
SC - O(1)

EBTC - O(nlogn)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t;
	int m, n;
	int flag, temp;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> m >> n;
		for (int j = m; j <= n; j++) {
			vector <int> v(10, 0);	//present status of digits
			//0 -> not present	1 -> present
			flag = 1; //all unique digits
			temp = j;
			while (temp > 0) {
				if (v[temp % 10] == 1) {
					flag = 0; //not unique
					break;
				}
				else {
					v[temp % 10] = 1;
					temp /= 10;
				}
			}
			if (flag == 1) cout << j << ' ';
		}
		cout << '\n';
	}

	return 0;
}