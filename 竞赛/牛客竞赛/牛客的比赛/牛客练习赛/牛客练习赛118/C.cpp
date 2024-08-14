#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMedian(int n, int m, int X, vector<int>& x_values, vector<int>& y_values) {
    int x_index = 0;
    int y_index = 0;

    for (int i = 0; i < n * m; ++i) {
        int x = x_values[x_index];
        int y = y_values[y_index];

        int median = max(min(X, x), min(max(X, x), y));

        X = median;

        x_index = (x_index + 1) % n;
        y_index = (y_index + 1) % m;
    }

    return X;
}

int main() {
    int n, m, X;
    cin >> n >> m >> X;

    vector<int> x_values(n);
    for (int i = 0; i < n; ++i) {
        cin >> x_values[i];
    }

    vector<int> y_values(m);
    for (int i = 0; i < m; ++i) {
        cin >> y_values[i];
    }

    int result = findMedian(n, m, X, x_values, y_values);
    cout << result << endl;

    return 0;
}
