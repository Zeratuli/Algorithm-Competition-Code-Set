#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve() {
    set<int> st;
    int a, b, c, d = 0;
    
    for (int i = 0; i < 3; i++) {
        cin >> a;
        st.insert(a);
    }

    if (st.size() == 1) {
        cout << "YES" << endl;
        return;
    } 

    for (int i = 0; i < 3; i++) {
        set<int> new_st;  // Create a new set for the next iteration
        for (int len : st) {
            if (len == 1) continue;

            b = (len + 1) / 2;
            c = len / 2;

            new_st.insert(b);
            new_st.insert(c);
        }
        st = new_st;  // Replace the original set with the new one
    }

    if (st.size() == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

signed main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
