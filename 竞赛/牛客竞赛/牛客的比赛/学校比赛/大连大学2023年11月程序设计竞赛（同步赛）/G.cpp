#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> c(n);
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }

    for (int i = 0; i < q; ++i) {
        int op;
        cin >> op;

        if (op == 1) {
            int l, r;
            cin >> l >> r;
            for (int j = l - 1; j < r; ++j) {
                c[j] = max(c[j], c[j + 1]);
            }
        } else if (op == 2) {
            int x;
            cin >> x;
            cout << c[x - 1] << endl;
        }
    }

    return 0;
}
