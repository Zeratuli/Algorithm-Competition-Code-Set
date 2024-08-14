#include <bits/stdc++.h>//滑动窗口

using namespace std;

const int N = 10000;

int main(void){

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a[N];
	deque<int> dqmax,dqmin;
	int n,k;
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	
	int cnt = 1;
	// 9   2 6 4 5 6 7 2 1 3 4, dq.front()存储的为a[i]的位置i，进出的为a[i]的位置。
	for(int i = 1; i <= n; i++){//找最大值
		
		if(!dqmin.empty() && i - dqmax.front() >= k) dqmax.pop_front();
		while(!dqmax.empty() && a[i] >= a[dqmax.back()]){
			dqmax.pop_back();
		}
		dqmax.push_back(i);
		if(i >= k)
			cout << a[dqmax.front()] << " ";
		//cout << "(" << (i-dqmax.front()) << " " << dqmax.front() <<  ")\n";
	}

	cout << endl;

	for(int i = 1; i <= n; i++){//找最小值
		
		if(!dqmin.empty() && i - dqmin.front() >= k) dqmin.pop_front();
		while(!dqmin.empty() && a[i] <= a[dqmin.back()]){
			dqmin.pop_back();
		}
		dqmin.push_back(i);
		if(i >= k)
			cout << a[dqmin.front()] << " ";
		//cout << "(" << (i-dqmin.front()) << " " << dqmin.front() <<  ")\n";
	}

	return 0;
}