#include<bits/stdc++.h>
using namespace std;
const int N = 3e5 + 10;
pair<long long, long long>s[N];
int main() {
	int n;
	cin >> n;
	map<long long, int>x1;
	map<long long, int>y1;
	for (int i = 1; i <= n; i++) {
		int x, y;
		cin >> x >> y;
		x1[x]++;
		y1[y]++;
		s[i] = {y, x};
	}
	sort(s + 1, s + n + 1);
	long long sum = 0;
	int ant = 0;
	for (int i = 1; i <= n; i++) {
//		cout << sum << endl;
		int k = n - i;
		int x = s[i].second;
		int y = s[i].first;
		if (ant != 0 && (s[i].first != s[i + 1].first || s[i].second != s[i + 1].second)) {
			y1[y] -= (ant + 1);
			x1[x] -= (ant + 1);
				k-=(y1[y]+x1[x]);	
			sum += k * (ant + 1);
			ant = 0;
			continue;
		}
		if (s[i].first == s[i + 1].first && s[i].second == s[i + 1].second) {
			ant++;
			continue;
		}
		if (y1[y] > 1) {
			k -= y1[y] - 1;
			y1[y]--;
		}
		if (x1[x] > 1) {
			k -= x1[x] - 1;
			x1[x]--;
		}

		sum += k ;
	}
	cout << sum;
	return 0;
}