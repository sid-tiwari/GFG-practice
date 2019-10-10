//-------------------------------------------------
/*
Problem - Power of 2

TC - O(logn)
SC - O(1)

EBTC - O(logn) -> with bitwise operators (TODO)
EBSC - O(1)
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    unsigned long long int n;
	cin >> t;
	while (t--) {
		cin >> n;

		if (n == 0) {
			cout << "NO\n";
			continue;
		}

		int flag = 1;
		while (n > 1) {
			if (n % 2 == 1) {
				flag = 0;
				break;
			}
			n /= 2;
		}
		if(flag) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
    return 0;
}