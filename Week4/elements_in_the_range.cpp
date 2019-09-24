//-------------------------------------------------
/*
Problem - Elements in the range

TC - O(n)
SC - O(b - a)

EBTC - O(n)
EBSC - O(1)	-> modified the array
*/
//-------------------------------------------------

#include <iostream>

using namespace std;

int main() {
	int t, n, a, b, e;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> a >> b;
		int arr[b-a+1];
		for (int j = 0; j < n; j++) {
			cin >> e;
			if (e >= a && e <= b) {
				arr[e-a] = 1;
			}
		}
		int flag = 1;
		for (int j = 0; j <= (b - a); j++) {
			if (arr[j] != 1) {
				flag = 0;
				break;
			}
		}
		if (flag) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}