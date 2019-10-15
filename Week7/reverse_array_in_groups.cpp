//-------------------------------------------------
/*
Problem - Reverse array in groups

TC - O(n)				
SC - O(1)

EBTC - O(n)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>
using namespace std;

int main()
{	
	typedef unsigned long long int ull;
    int t, n, k;
    vector <ull> v;
    ull e;

	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v.push_back(e);
		}

		int c = 0;
		int i = 0, j = k - 1;
		do {
			//cout << c << ' ' << (1.0 * n / k) << ' ' << i << ' ' << j << '\n';
			swap(v[i], v[j]);
			i++;
			j--;
			if (i >= j) {
				c++;
				i = k * c;
				j = (k * (c+1) - 1) < (n - 1) ? (k * (c+1) - 1) : (n - 1);
			}
		} while (c < (1.0 * n / k));

		for (int i = 0; i < n; i++) {
			cout << v[i] << ' ';
		}
		cout << '\n';

		v.clear();
	}
    return 0;
}