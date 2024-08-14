#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e5+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

struct troop1{
	int x,y;
	bool operator < (const troop1 &a)const{
		return x > a.x || (x == a.x && y < a.y);
	}//将攻击力排序
}p[N];
struct troop2{
	int x,y;
	bool operator < (const troop2 &a)const{
		return y > a.y || (y == a.y && x < a.x);
	}//将防御力排序
}q[N];

multiset<int> mst;

void solve(){
	int n,m;
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		cin >> p[i].x >> p[i].y;
	for(int i = 0; i < m; i++)
		cin >> q[i].x >> q[i].y;
	if(n < m){
		cout << -1;	
		return ;
	}
	sort(p,p+n);//防御力排序,一会先消灭防御高的
	sort(q,q+m);//攻击力排序,找够格的防御力最低的那个。
	int ans = n;
	int j = 0;
	for(int i = 0; i < m; i++){
		int attack = q[i].x;
		int defence = q[i].y;
		while(j < n && p[j].x >= defence){
			mst.insert(p[j].y);
			j++;
		}
		if(mst.empty()){
			cout << -1;
			return ;
		}
		multiset<int>::iterator it = mst.upper_bound(attack);//找到能抵御攻击的最小的那一个
		if(it == mst.end()){//没找到就拿防御力最小的充数
			it = mst.begin();
			ans--;
		}
		mst.erase(it);
	}
	mst.clear();
	cout << ans;

	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	cin >> t;
	for(int i = 1; i <= t; i++){
		cout << "Case #" << i << ": ";
		solve();
		cout << endl;
	}

	return 0;
}
