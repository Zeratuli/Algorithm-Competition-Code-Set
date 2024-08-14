#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool can(int a, int b, int c) {
    int g = gcd(a, gcd(b, c));
    return g == 1;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool result = can(a, b, c);
    if (result) {
        cout << "YES" << std::endl;
    } else {
        cout << "NO" << std::endl;
    }
    return 0;
}
