#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int tmp = 0;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			tmp = __gcd(tmp, a);
		}
		cout << (tmp == 1 ? 0 : -1) << '\n';
	}
	return 0;
}
