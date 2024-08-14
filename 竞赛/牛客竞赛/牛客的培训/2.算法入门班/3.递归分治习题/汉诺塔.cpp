#include <bits/stdc++.h>
#define int long long
using namespace std;
int cnt = 0;
void deal(int n, char start, char toward, char mid){
	if(n == 0) return ;
	deal(n-1,start,mid,toward);
	//cout << start << "->" << toward << endl;
	cnt++;
	deal(n-1,mid,toward,start);	
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	deal(64,'A','C','B');
	cout << cnt << endl;




	return 0;
}

