#include <iostream>
#include <queue>

using namespace std;

int main() {
    int k, a, b;
    cin >> k >> a >> b;


    priority_queue<int, vector<int>, greater<int>> min_heap;


    min_heap.push(a);
    min_heap.push(b);

 
    for (int i = 1; i < k; ++i) {
        int smallest = min_heap.top(); 
        min_heap.pop();


        min_heap.push(smallest + a);


        min_heap.push(smallest + b);
    }


    cout << min_heap.top() << endl;

    return 0;
}

