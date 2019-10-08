//-------------------------------------------------
/*
Problem - Angle between hour and minute hand

TC - O(1)				
SC - O(1)

EBTC - O(1)
EBSC - O(1)
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    float h, m;

	cin >> t;
	while (t--) {
		cin >> h >> m;
		if (m == 60.0) { //9:60 treated as 9:00 in question
			m = 0;
		}
		float h_angle = 30 * h + 0.5 * m;
		float m_angle = m * 6;
		float diff = abs(h_angle - m_angle);
		diff = diff < (360 - diff) ? diff : (360 - diff);
		cout << floor(diff) << '\n';
	}
    return 0;
}