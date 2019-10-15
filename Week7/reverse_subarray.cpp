//-------------------------------------------------
/*
Problem - Reverse sub array
	
		INCORRECT TEST CASES

TC - O(n)				
SC - O(1)

EBTC - O(n)
EBSC - O(1)
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, l, r, e;
    vector <int> v;

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v.push_back(e);
		}
		cin >> l >> r;

		if (r > n) {	//handling incorrect test cases
			int temp = r - n;
			while (temp--) {
				v.push_back(0);
			}
			n = r;
		}
		
		for (int i = l-1, j = r - 1; i < j; i++, j--) {
			swap(v[i], v[j]);
		}

		for (int i = 0; i < n; i++) {
			cout << v[i] << ' ';
		}
		cout << '\n';
		v.clear();
	}
    return 0;
}