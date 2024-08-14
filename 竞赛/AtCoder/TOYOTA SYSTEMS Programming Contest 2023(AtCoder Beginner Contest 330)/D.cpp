#include <bits/stdc++.h>

using namespace std;

int solve(int N, vector<string>& grid) {
    int count = 0;

    vector<int> row_count(N, 0);
    vector<int> col_count(N, 0);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (grid[i][j] == 'o') {
                row_count[i]++;
                col_count[j]++;
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (grid[i][j] == 'o') {
                count += (row_count[i] - 1) * (col_count[j] - 1);
            }
        }
    }

    return count;
}

int main() {
    int N;
    cin >> N;

    vector<string> grid(N);
    for (int i = 0; i < N; ++i) {
        cin >> grid[i];
    }

    int result = solve(N, grid);
    cout << result << endl;

    return 0;
}
