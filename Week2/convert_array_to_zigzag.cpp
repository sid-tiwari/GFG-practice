//-------------------------------------------------
/*
Problem - Convert array into zig-zag fashion 

TC - O(n)
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
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> e;
			v.push_back(e);
		}
		
		int flag = 0; //flag = 0 : < , flag = 1 : >

		for (int j = 0; j < n-1; j++) {
			if(!flag) { //flag = 0 : <
				if (v[j] > v[j+1]) swap(v[j], v[j+1]);
				flag = 1;
			}
			else { //flag = 1 : >
				if (v[j] < v[j+1]) swap(v[j], v[j+1]);
				flag = 0;
			}
		}

		for (int j = 0; j < n-1; j++)
			cout << v[j] << ' ';
		cout << v[n-1] << '\n';

		v.clear();
	}

	return 0;
}