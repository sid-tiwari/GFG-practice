//-------------------------------------------------
/*
Problem - Segregate even and odd numbers

TC - O(nlogn)
SC - O(1)

EBTC - O() N/A
EBSC - O()
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, e;
	vector <int> v;

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v.push_back(e);
		}
		
		sort(v.begin(), v.end());

		//even numbers
		for (auto itr = v.begin(); itr != v.end(); itr++) {
			if(*itr % 2 == 0) {
				cout << *itr << ' ';
			}
		}
		//remaining odd numbers
		for (auto itr = v.begin(); itr != v.end(); itr++) {
			if(*itr % 2 != 0) {
				cout << *itr << ' ';
			}
		}
		cout << '\n';

		v.clear();
	}
    return 0;
}