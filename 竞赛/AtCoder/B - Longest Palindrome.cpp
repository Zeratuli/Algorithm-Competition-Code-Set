#include <bits/stdc++.h>
using namespace std;

bool judge(string s) {
	int n = s.size();
	for (int i = 0; i < n; i++) if (s[i] != s[n - i - 1]) return 0;
	return 1;
}

int main() {
	string s;
	cin >> s;
	int n = s.size();
	int ans = 1;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j <= n; j++) {
			string t = "";
			for (int k = i; k < j; k++) t += s[k];
			if (judge(t)) ans = max(ans, j - i);
		}
	}
	cout << ans << endl;
}
