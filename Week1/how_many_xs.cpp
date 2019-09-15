//-------------------------------------------------
/*
Problem - How many X's?

TC - O(nlogn)
SC - O(1)

EBTC - O(nlogn)	Naive approach
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	int x, l, u, size, count;
	string str;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x;
		cin >> l;
		cin >> u;
		count = 0;
		for (int j = l+1; j < u; j++) {
			str = to_string(j);
			size = str.size();
			for (int k = 0; k < size; k++) {
				if (str[k] - '0' == x) {
					count++;
				}
			}
		}
		cout << count << '\n';
	}

	return 0;
}