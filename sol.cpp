#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int gcd(int a, int b) {
	if(b==0)
		return a;
	return gcd(b, a%b);
}

void solve() {
	int n;
	cin >> n;
	int tmp=0;
	for(int i=0; i<n; ++i) {
		int a;
		cin >> a;
		tmp=gcd(tmp, a);
	}
	cout << (tmp==1?0:-1) << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
