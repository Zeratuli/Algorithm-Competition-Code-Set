#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	queue<int> qu;
	int n;
	cin >> n;
	cout << n << " " <<  n+1 << " " << n+2 << endl; 
	qu.push(n);//向队尾插入元素
	qu.push(n+1);
	qu.push(n+2);
	cout << qu.front() << endl; //队首元素
	cout << qu.back() << endl; //队尾元素
	qu.pop();//弹出队首元素
	cout << qu.front() << endl; //队首元素
	cout << qu.back() << endl; //队尾元素

	return 0;
}
