#include <bits/stdc++.h>

using namespace std;

int main(void){
	deque<int> dq;
	deque<int>::iterator it;

	int temp = 0;
	dq.push_back(10);
	for(int i = 0; i < 10; i++){
		cin >> temp;
		dq.push_back(temp);
		dq.push_front(temp+1);
	}
	it = dq.begin();

	cout << dq.size() << endl;
	for(it;it != dq.end(); it++)
		cout << *it << " ";
	cout << endl;

	return 0;
}