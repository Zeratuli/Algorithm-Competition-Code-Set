#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y;
        cin >> x >> y;

        if (y % x != 0) {
            cout << -1 << endl;
        } else {
            int operations = 0;
            while (x != y) {
                if (y % 6 == 0) {
                    y /= 6;
                } else if (y % 5 == 0) {
                    y /= 5;
                } else {
                    break;
                }
                operations++;
            }

            if (x == y) {
                cout << operations << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
