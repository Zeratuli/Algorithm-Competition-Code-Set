#include <bits/stdc++.h>
using namespace std;
stack<int> st;
int main(void){
	int n;
	cin >> n;
	int m = n;
	int a[10000],b[10000];//赋值后才会默认为0 
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = n; i > 0; i--)
	{
		b[i] = max(b[i+1],a[i]);	
		cout << b[i] << " ";
	}
	for(int i = 1; i <= n; i++){
		st.push(a[i]);
		while( !st.empty() && st.top() > b[i+1]){
			cout << st.top() << " ";
			st.pop();
		}
	}
	return 0;	
}	
