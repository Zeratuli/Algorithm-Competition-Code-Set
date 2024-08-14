#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
int cnt = 0, step[N], n = 0;
map<string,int> mp1,mp2;
string A,B,a[10],b[10];
queue<string> q1,q2;

void tran(int rec,string &cur,int i,string a[],string b[]){
	cur.erase(rec,a[i].length());
	cur.insert(rec,b[i]);
}

int calculate(map<string,int> &mp1, map<string,int> &mp2, queue<string> &q, string a[], string b[]){
	int size = q.size();//q.size()如果放在循环中每次都会计算大小，会有开销
	for(int f = 0; f < size; f++){//这一步循环是为了获得q中已有的元素，然后把已有元素拿出来用一遍
		string temp = q.front();
		q.pop();
		for(int i = 0; i < temp.size(); i++){//这里与bfs的while等同
			for(int j = 0; j < n ; j++){
				int rec = temp.find(a[j],i);
				if(rec != temp.npos){
					string cur = temp;	
					tran(rec,cur,j,a,b);
					if(mp2.find(cur) != mp2.end()){
						return step[mp1[temp]] + step[mp2[cur]] + 1;
					}
					if(mp1.find(cur) == mp1.end()){
						mp1[cur] = ++cnt;
						step[cnt] = step[mp1[temp]] + 1;
						q.push(cur);
					}
				}
			}
		}
	}
	return -1;
}

int bfs(){
	q1.push(A);q2.push(B);
	mp1[A] = ++cnt;mp2[B] = ++cnt;
	while(q1.size() && q2.size()){
		int x = -1;
		if(q1.size() <= q2.size())
			x = calculate(mp1,mp2,q1,a,b);
		else
			x = calculate(mp2,mp1,q2,b,a);
		if(x!=-1&&x<10) return x;
	}
	return -1;
}

void solve(){
	cin >> A  >> B;
	while(cin >> a[n] >> b[n]) n++;
	int ans = bfs();
	if(ans == -1) cout << "NO ANSWER!" << endl;
	else cout << ans << endl;
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}

	return 0;
}