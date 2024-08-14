#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    bool found = false;
    cin >> n;
    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < 32; j++) {
            if (pow(2, i) * pow(3, j) == n) {
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    if (found) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
