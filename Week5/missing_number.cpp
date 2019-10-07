//-------------------------------------------------
/*
Problem - Missing number

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
    int t, n, e;
	vector <int> v;

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n-1; i++) {
			cin >> e;
			v.push_back(e);
		}
		
		unsigned long long sum = 0;
		for (int i = 0; i < n-1; i++) {
			sum += v[i];
		}
		
		cout << n * (n + 1) / 2 - sum << '\n';

		v.clear();
	}
    return 0;
}