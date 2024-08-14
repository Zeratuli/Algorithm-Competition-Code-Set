#include <iostream>
#include <vector>
using namespace std;

long long count(const vector<int>& arr, long long k) {
    int n = arr.size();
    int start = 0, end = 0;
    long long cur = 0;
    long long count = 0;

    while (end < n) {
        cur += arr[end];
        while (cur >= k) {
            count += n - end;  
            cur -= arr[start];
            start++;
        }

        end++;
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

    cout << count(arr, k) << endl;
    return 0;
}
