#include <bits/stdc++.h>
#include <vector>


using namespace std;

int main(void){
	vector<int> v1;
	int num;
	while(1){
		cin >> num;
		if(num == -1)
			break;
		v1.push_back(num);
	}
	vector<int>::iterator it;
	it = v1.begin()+1;

	cout << *it << endl;
	cout << v1[1];
	




	return 0;
}
