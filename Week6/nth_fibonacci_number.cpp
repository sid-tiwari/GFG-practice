//-------------------------------------------------
/*
Problem - Nth Fibonacci number

TC - O(n)
SC - O(1)

EBTC - O(logn)->using recursion formula  O(1)->golden ratio approx.
EBSC - O(1)
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;

	cin >> t;
	while (t--) {
		int f1 = 1, f2 = 1;
		cin >> n;
		if (n == 1 || n == 2) {
			cout << "1\n";
			continue;
		}

		for (int i = 3; i <= n; i++) {
			f2 = f1 + f2;
			f1 = f2 - f1;
			f2 = f2 % 1000000007;
		}

		cout << f2 << '\n';
	}
    return 0;
}