//-------------------------------------------------
/*
Problem - Professor and Parties

TC - O(n)
SC - O(n)

EBTC - O(n)
EBSC - O(n)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {

	typedef unsigned long long int ull; 
	int t, n;
	ull e;
	vector <ull> v; 
	unordered_map <ull, int> mp;;

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v.push_back(e);
		}

		int flag = 0;	//all different
		for (int i = 0; i < n; i++) {
			if (mp.count(v[i]) > 0) {
				flag = 1;	//repetition
				break;
			}
			else
				mp[v[i]] = 1;
		}

		if (flag)
			cout << "BOYS\n";
		else
			cout << "GIRLS\n";

		mp.clear();
		v.clear();
	}

	return 0;
}