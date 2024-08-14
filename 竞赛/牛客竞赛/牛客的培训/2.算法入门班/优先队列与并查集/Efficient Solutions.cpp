#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

struct coordinate{
	int x,y;
	bool operator < (const coordinate &a)const{
		return x < a.x || (x == a.x && y <a.y);//用结构体第一个x 或 第二个y排序(当x相等时)
	}
};


void solve(){
	int n;
	multiset<coordinate> mst;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x,y;
		cin >> x >> y;
		coordinate p;
		p.x = x;
		p.y = y;
		multiset<coordinate>::iterator it = mst.lower_bound(p);//返回第一个大于等于p位置的数
		if(it == mst.begin() || (--it)->y > y){//若mst为空或前一个位置的y比p点的y大，则把p插入multiset
			mst.insert(p);
			it = mst.upper_bound(p);//找到第一个比p小的数
			while(it != mst.end() && it->y >= y) mst.erase(it++);//把比p大的数悉数请出
		}
		cout << mst.size() << endl;
	}
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	cin >> t;
	for(int i = 1; i <= t; i++){
		cout << "Case #" << i << ":" <<endl;
		solve();
		cout << endl;
	}

	return 0;
}
