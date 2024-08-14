#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int N = 1e6;
int a[N], b[N],cnt = 0;

void hebin(int l, int mid, int r){
	int p = l, q = mid+1;
	for(int i = l; i <= r; i++){
		if((q > r) || (p <= mid && a[p] <= a[q])){
			b[i] = a[p++];			 
		}		
		else{
			b[i] = a[q++];
			cnt += mid+1 - p;	
		}
	}
	for(int i = l; i <= r; i++){
		a[i] = b[i];
	}
	return ;	
}

void mergesort(int l,int r){
	if(l == r) return ;
	int mid = (l+r)/2;
	mergesort(l,mid);
	mergesort(mid+1,r);
	hebin(l,mid,r);
	return ;
}


signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	int n;
	cin >> n;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	for(int i = 0; i < n; i++){
		cin >> a[i]	;
	}
	mergesort(0,n-1);
//	for(int i = 0; i < n; i++){
//		cout << a[i] << " ";
//	}
	cout << cnt << endl;
	return 0;
}

