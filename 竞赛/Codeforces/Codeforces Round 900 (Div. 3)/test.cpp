#include <iostream>
#include <vector>

using namespace std;


struct TestCase {
    int n, k;
    vector<int> a;
};

string mostCommonSubsegment(int t, vector<TestCase>& testCases) {
    string result = "";

    for (int i = 0; i < t; i++) {
        int n = testCases[i].n;
        int k = testCases[i].k;
        vector<int>& a = testCases[i].a;
        int maxCount = 0;
        int currentCount = 0;
        bool foundK = false;

        for (int j = 0; j < n; j++) {
            if (a[j] == k) {
                currentCount++;
                foundK = true;
            } else {
                if (foundK) {
                    maxCount = max(maxCount, currentCount);
                    currentCount = 0;
                }
            }
        }

        maxCount = max(maxCount, currentCount);

        if (maxCount > 0) {
            result += "YES\n";
        } else {
            result += "NO\n";
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    vector<TestCase> testCases(t);

    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        testCases[i].n = n;
        testCases[i].k = k;
        testCases[i].a.resize(n);

        for (int j = 0; j < n; j++) {
            cin >> testCases[i].a[j];
        }
    }

    string results = mostCommonSubsegment(t, testCases);
    cout << results;

    return 0;
}
