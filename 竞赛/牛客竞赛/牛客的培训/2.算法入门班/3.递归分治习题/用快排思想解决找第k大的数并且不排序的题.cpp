#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e6;

int a[N]; 

int find(int l, int r, int k){
	if(l == r) return a[l];
	int i = l, j = r;
	int mid = (l + r)/ 2;
	int x = a[mid];
	while(i <= j){
		while(a[i] < x) i++;
		while(a[j] > x) j--;
		if(i <= j){
			swap(a[i],a[j]);
			i++;
			j--;
		}	
	}
	if(k <= j) find(l,j,k);
	if(i <= k) find(i,r,k);//base case 
	else return a[k];
}

void quick_sort(int l, int r){
	int i = l, j = r;
	int mid = (l + r)/ 2;
	int x = a[mid];
	while(i <= j){
		while(a[i] < x) i++;
		while(a[j] > x) j--;
		if(i <= j){
			swap(a[i],a[j]);
			i++;
			j--;
		}	
	}
	if(l < j) quick_sort(l,j);
	if(i < r) quick_sort(i,r);//base case 
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	int n,k;
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	int ans = find(1,n,k);
	quick_sort(1,n);
	for(int i = 1; i <= n; i++){
		cout << a[i]  << " ";
	}
	cout << endl;
	cout << ans << endl;
	return 0;
}

