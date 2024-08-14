#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 3e5 + 1000;
const int mod = 1e9 + 7;
int a[N];
struct ans1 {
    int x;
    int y;
    ans1() {}
    ans1(int x, int y) : x(x), y(y) {}
    bool operator<(const ans1 m) const {
        return y < m.y;
    }
} ans[N];
bool comp(ans1 A, ans1 B) {
    return A.y > B.y;
}
bool comp2(ans1 A, ans1 B) {
    return A.x > B.x;
}
set<ans1> ans_set; // Declare a set to replace the array

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> ans[i].x >> ans[i].y;
        a[ans[i].x]++;
        ans_set.insert(ans[i]); // Insert into the set
    }
    int sum = 0, sum1 = 0;
    for (int i = 1; i <= n; i++) {
        auto it = ans_set.lower_bound(ans[i]); // Use set's lower_bound
        sum += distance(ans_set.begin(), it);
    }
    ans_set.clear(); // Clear the set before reusing

    sort(ans + 1, ans + 1 + n, comp2);
    for (int i = 1; i <= n; i++) {
        int t = distance(ans_set.begin(), ans_set.lower_bound(ans[i])); // Use set's lower_bound
        if (ans[i].x != ans[i].y)
            sum1 += i - t;
        ans_set.insert(ans[i]); // Insert into the set
    }
    sum -= sum1;
    cout << sum << endl;
    return;
}

signed main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
