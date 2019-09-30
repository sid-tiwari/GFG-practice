//-------------------------------------------------
/*
Problem - Pythagorean Triplet

TC - O(max^2)	[O(n^2) time and O(1) with 2-pointer method gave TLE]
SC - O(n)

EBTC - O(max^2)	-> constant since max == 1000 -> O(10^6)
EBSC - O(n)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>
#include <cmath>
//#include <algorithm>

#define MAX 1001

using namespace std;

int main() {

	int t, n, e;

	
	vector <int> v;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> e;
			v.push_back(e);
		}
	/*	Sorting + Two-pointer
		sort(v.begin(), v.end());

		int l, r, val;
		int flag = 0;
		for (int j = n - 1; j > 1; j--) {
			l = 0, r = j - 1; //Two-pointer method
			while (l < r) {
				if (v[l] + v[r] == v[j]) {
					flag = 1;
					break;
				}
				else {
					if (v[l] + v[r] < v[j]) 
						l++;
					else
						r--;
				}
			}
		}
	*/

		//Hashing
		int hash[MAX] = { 0 }; //max possible value = 1000
		
		for (int j = 0; j < n; j++) {
			hash[v[j]] = 1;
		}

		int flag = 0, hyp;
		for (int j = 0; j < MAX; j++) {
			if (!hash[j])
				continue;
			else {
				for (int k = 0; k < MAX; k++) {
					if (!hash[k])
						continue;
					else {
						hyp = sqrt(j * j + k * k);
						if (hyp*hyp != j*j + k*k)
							continue;
						if (hash[hyp]) {
							flag = 1;
							break;
						}
					}
				}
				if (flag) break;
			}
		}
		if (flag) cout << "Yes\n";
		else cout << "No\n";
		v.clear();	
	}

	return 0;
}