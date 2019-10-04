//-------------------------------------------------
/*
Problem - Find first set bit

TC - O(logn)
SC - O(1)

EBTC - O(1)	-> log2(n & -n) + 1
EBSC - O(1)
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, count;

	cin >> t;
	while (t--) {
		cin >> n;
		if (n == 0)
			cout << "0\n";
		else {
			count = 0;
			while (n > 0) {
				if (n % 2 == 0) {
					count++;
					n /= 2;
				}
				else {
					count++;
					cout << count << '\n';
					break;
				}
			}
		}
	}
    return 0;
}