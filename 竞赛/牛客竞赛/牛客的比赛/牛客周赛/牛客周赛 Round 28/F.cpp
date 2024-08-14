#include <bits/stdc++.h>
using namespace std;

long long cou(const vector<int>& arr, long long k) {
    int n = arr.size();
    vector<long long> pre(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        pre[i + 1] = pre[i] + arr[i];
    }

    long long count = 0;
    for (int i = 0; i < n; ++i) {
        int low = i + 1, high = n, best = n + 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (pre[mid] - pre[i] >= k) {
                best = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        count += n - best + 1;
    }

    return count;
}

int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << cou(arr, k) << endl;
    return 0;
}
