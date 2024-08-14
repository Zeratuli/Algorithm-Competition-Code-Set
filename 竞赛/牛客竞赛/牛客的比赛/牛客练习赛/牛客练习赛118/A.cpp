#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+100;

void solve(){
	map<char,int> mp,mp2;
	priority_queue<int,vector<int>,greater<int>> pq;
	priority_queue<int,vector<int>,greater<int>> pq1;
	string A,B;
	cin >> A >> B;
	int lenA = A.length();
	int lenB = B.length();
	for(int j = 0; j < lenB; j++){
		mp[B[j]]++;
	}
	for(int j = 0; j < lenB; j++){
		pq1.push(mp[B[j]]);
	}
	for(int i = 0; i < lenA; i++){
		mp2[A[i]]++;
	}
	int num2 = 99999,num = 1;
	for(int i = 0; i < lenB; i++){
		int num3 = num2;
		pq.push(mp2[B[i]]);
		num2 = min(num2,mp2[B[i]]);
		if(num3 != num2) num = mp[B[i]];
		if(pq.top() <= 0){
			cout << 0 << endl;
			return ;
		}
	}


	cout << pq.top()/num<< endl;
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}
