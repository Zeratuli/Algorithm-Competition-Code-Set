#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        // 如果 k 为 1，或者 x 小于 k，或者 x 大于 k * n，则不可能选择
        if (k == 1 || x < k || x > k * n) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
