//-------------------------------------------------
/*
Problem - Type of array

TC - O(n)
SC - O(1)

EBTC - O(n) -> with duplicates allowed
EBSC - O(1)
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

void show(vector<unsigned long long int> v) {
	for (auto i : v) {
		cout << i << ' ';
	}
	cout << '\n';
}

int main()
{
    int t, n;
    typedef unsigned long long int ull;
    ull e;
	vector <ull> v;

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v.push_back(e);
		}
		int arrtype = 0;
		int index = 0;
		int max = v[0];
		for (int i = 1; i < n; i++) {
			if (v[i] > max) {
				max = v[i];
				index = i;
			}
		}
		
		if (index == 0) {	//max at beginning
			if (v[1] > v[2]) { //5 4 3 2 1
				arrtype = 2;
			}
			else {	//5 1 2 3 4
				arrtype = 4;
			}
		}
		else {
			if (index == n-1) {	//max at end
				if (v[n-2] > v[n-3]) {	//1 2 3 4 5
					arrtype = 1;
				}
				else {	//4 3 2 1 5
					arrtype = 3;
				}
			}
			else {	//max somewhere in between
				if (v[index-1] > v[index+1]) {	//4 5 1 2 3
					arrtype = 4;
				}
				else {	//2 1 5 4 3
					arrtype = 3;
				}
			}
		}

		cout << v[index] << ' ' << arrtype << '\n';
		v.clear();
	}
    return 0;
}