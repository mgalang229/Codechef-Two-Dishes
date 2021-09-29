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
		
		// if 'a' is less than 'c', then swap them
		if (a < c) {
			swap(a, c);
		}
		
		// choose the type of dish that would produce the maximum dishes (no. of output)
		// to do this, choose the higher value (which is 'a') and create 'min(a, b)' dishes from it
		int ans = min(a, b);
		b -= ans;
		a -= ans;
		
		// afterwards, using the leftover vegetables, create 'min(b, c)' dishes from it
		ans += min(b, c);
		b -= min(b, c);
		c -= min(b, c);
		
		cout << (ans >= n ? "YES" : "NO") << '\n';
	}
	return 0;
}
