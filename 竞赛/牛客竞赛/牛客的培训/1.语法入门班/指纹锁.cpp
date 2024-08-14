#include <bits/stdc++.h>
#define int long long
using namespace std;

int k = 0;

struct node{
	int num;
	bool operator <(const node &b)const{
		if(abs(this->num - b.num) <= k) return false;
		else return this->num < b.num;
	}
};

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	set<node> st;
	int m;
	cin >> m >> k;
	for(int i = 0; i < m; i++)
	{
		
		char a[10];
		int n;
		cin >> a >> n;
		node now;
		now.num = n;
		if(a[0] == 'a') st.insert(now);
		else if(a[0] == 'd') st.erase(now);
		else{
			if(st.find(now) != st.end()){
	   			cout << "Yes" << endl;
			}
			else
				cout << "No" << endl;
		}
	}

	return 0;
}

