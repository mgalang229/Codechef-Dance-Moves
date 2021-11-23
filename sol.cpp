#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y;
		cin >> x >> y;
		int ans = 0;
		/*
			There will be two (2) cases below:
			case 1: going to the negative side (if-statement)
			case 2: going to the positive side (else-statement with nested if-else)
		*/
		if (y <= x) {
			// go backwards since y is less than x
			ans = x - y;
		} else {
			int dist = y - x;
			if (dist % 2 == 0) {
				// completely use (k + 2) moves
				ans = dist / 2;
			} else {
				// taking him to (y + 1)
				ans = (dist + 1) / 2;
				// one backward move (k - 1)
				ans = ans + 1;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
