#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int parallel_gcd(int a, int b) {
    int result;
    thread t([&result, a, b]() {
        result = gcd(a, b);
    });
    t.join(); // 等待线程完成
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    cin >> a >> b;

    if (a < b) swap(a, b);

    int ans = parallel_gcd(a, b);
    cout << ans << endl;

    return 0;
}
