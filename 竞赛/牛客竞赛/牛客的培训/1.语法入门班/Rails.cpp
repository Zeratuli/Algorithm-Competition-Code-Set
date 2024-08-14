#include <bits/stdc++.h>
using namespace std;
stack<int> st;
void f(int n){
	int a[2000];
	while(1){
		memset(a,0,sizeof(a));
		for(int i = 1;i <= n;i++){
			cin >> a[i];
			if(a[i] == 0)
				break;
		}
		if(a[1] == 0)
			break;
		int j = 1;
		for(int i = 1; i <= n; i++){
			st.push(i);
			while(!st.empty() && a[j] == st.top()){
			//	cout << j << " " << st.top() << endl;
				st.pop();
				j++;
			}
		}
		if(!st.empty()){cout<<"No\n";while(!st.empty())st.pop();}
		else cout << "Yes\n";
	}
	return ;
}

int main()
{
	int n = 1;
	
	while(n != 0){
		cin >> n;
		f(n);
		cout << endl;
	}
		return 0;
}
	
