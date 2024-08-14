#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int max_deleted = 0;

    for (int i = 0; i < n; ++i) {
        char current_char = s[i];
        int j = (i + 1) % n;
        int count = 1;

        while(s[j] == current_char) {
            ++count;
            j = (j + 1) % n;
        }

        max_deleted = max(max_deleted, min(count, 2));
    }

    cout << max_deleted * 2 << endl;

    return 0;
}
