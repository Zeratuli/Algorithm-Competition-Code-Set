#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;


signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	priority_queue<int,vector<int>,less<int>> pq1;
	priority_queue<int,vector<int>,greater<int>> pq2;


	pq1.push(10);pq1.push(1);pq1.push(6);pq1.push(23);pq1.push(99);
	pq1.push(15);pq1.push(20);pq1.push(12);pq1.push(6);

	pq2.push(10);pq2.push(1);pq2.push(6);pq2.push(23);pq2.push(99);
	pq2.push(15);pq2.push(20);pq2.push(12);pq2.push(6);
	while(!pq1.empty()){//输出从大到小的排序less：
		cout << pq1.top() << " ";
		pq1.pop();
	}

	cout << endl;

	while(!pq2.empty()){//输出从小到达的排序greater：
		cout << pq2.top() << " ";
		pq2.pop();
	}




	return 0;
}
