#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e6;

int a[N]; 

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

	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	quick_sort(0,n-1);
	for(int i = 0; i < n; i++){
		cout <<  a[i];
	}
	

	return 0;
}

