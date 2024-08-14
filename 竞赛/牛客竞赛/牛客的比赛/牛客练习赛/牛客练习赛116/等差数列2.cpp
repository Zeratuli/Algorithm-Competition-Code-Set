#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;

void sovle() {
	int a, k, q;
	cin >> a >> k >> q;
	while (q--){
		int l, r;
		cin >> l >> r;
		if (a % 2 == 0 && k % 2 == 0) cout << -1 << endl;
		else if (a % 2 != 0 && k % 2 != 0) {
			if (l == r) {
				if (l % 2 == 0) cout << -1 << endl;
				else cout << 1 << endl;

				continue;
			}
			if (l % 2 == 0 && r % 2 == 0) cout << -1 << endl;
			else if (l % 2 != 0 && r % 2 != 0) cout << 1 << endl;
			else cout << 0 << endl;
		} else if (a % 2 == 0 && k % 2 != 0) {
			if (l == r) {
				if (l % 2 == 0) cout << 1 << endl;
				else cout << -1 << endl;

				continue;
			}
			if (l % 2 == 0 && r % 2 == 0) cout << 1 << endl;
			else if (l % 2 != 0 && r % 2 != 0) cout << -1 << endl;
			else cout << 0 << endl;
		} else {
			cout << 1 << endl;
		}
	}

}

signed main() {
	int T = 1;
	while (T--) sovle();
	return 0;
}
