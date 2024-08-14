#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
int a[N];

void solve(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a+1,a+n+1);
	int x;
	cin >> x;
	int l = 1,r = n;
	int mid;
	for(int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	while(l<r){
		mid = (l+r)/2;
		if(a[mid] >= x) r = mid-1;
		else l = mid+1;
	//  cout << "l " << l << " r:" << r << endl;
	}//这里可以找到>=x的第一个位置
	cout << a[r+1] << endl;
	cout << binary_search(a+1,a+n+1,8)<< endl;//查找这个数是否存在
	cout << lower_bound(a+1,a+n+1,3)- &a[1] << endl;//返回符合条件的元素位置(找小于能插入位置的位置)
	cout << upper_bound(a+1,a+n+1,3)- &a[1] << endl;//返回符合条件的元素位置(找大于能插入位置的位置)
	for(int i = 1; i <= n+1; i++){	
		cout << a[i] << " ";
	}

	return ;
}


signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	t = 1;
	while(t--){
		solve();
	}
	return 0;
}
