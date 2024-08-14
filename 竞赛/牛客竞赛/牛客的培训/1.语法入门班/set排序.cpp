#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

    int n;
    cin >> n;
    int num;
    set<int> st;
    
    for(int i = 0; i < n; i++)
    {
		cin >> num;
		st.insert(num);
    }
    set<int>::iterator it;
    for(it = st.begin(); it != st.end(); it++)
    {
		cout << *it << " ";
    }
    cout << endl;

	return 0;
}

