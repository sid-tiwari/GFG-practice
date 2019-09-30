//-------------------------------------------------
/*
Problem - 

TC - O(n^2)
SC - O(1)	-> O(n) if limit of n not given

EBTC - O()	N/A
EBSC - O()
*/
//-------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n;
	//N <= 400  ->  range of primes: <= 200 ( 2 to N/2)
	//can generate primes beforehand
	vector <int> is_prime(201, 1);  //primes[i] == 1 -> prime, 0 -> composite
	
	//Sieve of eratosthenes
	for (int i = 2; i*i <= 200; i++) {
		if(is_prime[i]) {
			for (int j = i*i; j <= 200; j += i) {
				is_prime[j] = 0;
			}
		}
	}

	//List of primes
	vector <int> primes;
	for (int i = 2; i <= 200; i++) {
		if (is_prime[i]) {
			primes.push_back(i);
			//cout << i << ' ';
		}
	}

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int i : primes) {
			if (i > n/2)
				break;
			for (int j : primes) {
				if (i*j <= n)
					cout << i << ' ' << j << ' ';
				else
					break;
			}
		}
		cout << '\n';
	}
	return 0;
}