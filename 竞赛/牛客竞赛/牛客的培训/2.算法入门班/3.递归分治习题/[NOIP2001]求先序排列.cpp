#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
const int N = 1e6+100;
string zhong, hou;

void deal(int l1, int r1, int l2, int r2){
	if(l1 > r1) return ;
	cout << hou[r2];
	//cout << l1 << " " << r1 << " " << l2 << " " << r2 << endl;
	int pos = -1;
	for(int i = l1; i <= r1; i++){
		if(zhong[i] == hou[r2]) pos = i;
	}
	deal(l1,pos-1,l2,l2+(pos-1-l1));
	deal(pos+1,r1,l2+(pos-1-l1)+1,r2-1);
}

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	cin >> zhong >> hou;
	int l = zhong.length();//用中序或后序的长度（一样长）
	deal(0,l-1,0,l-1);


	return 0;
}