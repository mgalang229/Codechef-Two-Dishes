#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, a, b, c;
		cin >> n >> a >> b >> c;
		// check if the no. of vegetables are greater than or equal to the no. of guests
		// and if the combined no. of fruits and fishes are also greater than or equal to the no. of guests
		cout << (b >= n && a + c >= n ? "YES" : "NO") << '\n';
	}
	return 0;
}
