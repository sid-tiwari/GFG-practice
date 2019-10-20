//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Number of groups 

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
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v.push_back(e);
		}
		
		int c0 = 0, c1 = 0, c2 = 0; //counts for remainders 0,1,2
		for (int i = 0; i < n; i++) {
			if (v[i]%3 == 0) c0 += 1;
			if (v[i]%3 == 1) c1 += 1;
			if (v[i]%3 == 2) c2 += 1;
		}

		//sum of remainders must be 0,3,6 for sum to be divisible by 3
		//c0C2 + c0C3 + c1C1*c2C1*(c0+1) + c1C3 + c2C3 
		unsigned long long pairs = c0 * (c0 - 1) / 2
				   				 + c0 * (c0 - 1) * (c0 - 2) / 6
				   				 + c1 * c2 * (c0 + 1)
				   				 + c1 * (c1 - 1) * (c1 - 2) / 6
				   				 + c2 * (c2 - 1) * (c2 - 2) / 6;

		cout << pairs << '\n';

		v.clear();
	}

	return 0;
}