#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int lengths[3] = {a, b, c};
        sort(lengths, lengths + 3);
        
        int operations = 0;

        // Perform operations to make the lengths equal
        while (lengths[0] < lengths[2]) {
            if (lengths[0] == lengths[1]) {
                // If two lengths are equal, cut the longer one
                lengths[2]--;
            } else {
                // Cut the shorter thread
                lengths[0]++;
            }
            operations++;
            sort(lengths, lengths + 3);
        }
        
        if (operations <= 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
