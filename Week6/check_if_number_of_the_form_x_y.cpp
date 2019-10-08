//-------------------------------------------------
/*
Problem - Check if a number can be expressed as x^y

TC - O() -> TODO
SC - O()

EBTC - O(sqrt(n))
EBSC - O(1)
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
	//Sieve of eratosthenes
	//since prime numbers cannot be of the required form
	vector <bool> is_prime(101, true); 
	//range of n is known = 100
	for (int i = 2; i*i <= 100; i++) {
		if(is_prime[i]) {
			for (int j = i*i; j <= 100; j += i) {
				is_prime[j] = false;
			}
		}
	}

	map <int, int> mp;

    int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		if (n == 1) {
			cout << "1\n";
			continue;
		}
		if (is_prime[n]){
			cout << "0\n";
			continue;
		}

		for (int factor = 2; n > 1; factor++ )	{
			while (n % factor == 0 && n > 0) {
				if (mp.count(factor)) {
					mp[factor]++;
				}
				else {
					mp[factor] = 1;
				}
				n /= factor;
			}
		}

		vector <int> powers;
		for (auto itr = mp.begin(); itr != mp.end(); itr++) {
			powers.push_back(itr->second);
		}

		//powers of all factors should have gcd > 1
		//e.g 36 = 2^2*3^2 = 6^2 or 62500 = 2^2*5^6 = 250^2
		int result = powers[0];
		for (int i = 1; i < mp.size(); i++){
    		result = __gcd(result, powers[i]);	
		}

		if (result > 1) {
			cout << "1\n";
		}
		else {
			cout << "0\n";
		}
		mp.clear();
		powers.clear();
	}
	is_prime.clear();
    return 0;
}