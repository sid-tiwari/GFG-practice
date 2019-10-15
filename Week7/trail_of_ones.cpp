//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Trail of ones

TC - O(1)
SC - O(1)

EBTC - O(log n)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n;

	//no. of strings with no consecutive ones = fib(n+2)
	//no of strings with consecutive ones = 2^n - fib(n+2)
	//upto 32nd number of fibonacci sequence
	//since 2 <= n <= 30
	vector <int> fib{1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309};
	cin >> t;
	while (t--) {
		cin >> n;
		cout << (1 << n) - fib[n+1] << '\n';
	}

	return 0;
}