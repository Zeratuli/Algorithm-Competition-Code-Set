#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
string A;
void solve(){
	cin >> A;
	string B = "tomorrow";
	int cnt = 0,jud = 0;
	int len = A.length();
	if(B.find(A) != string::npos){
		jud = 1;
	}
	if(A.find("tomorrow") != string::npos){
		cout << "no" << endl;
		return ;
	}
	else{
		for(int i = 0; i < len; i++){
			if(A[i] != 't' && A[i] != 'o' && A[i] != 'm' && A[i] != 'r' && A[i] != 'w'){
				cout << "no" << endl;
				A.clear();
				return ;
			}
			else{
				cnt++;
			}
		}
		if(cnt == len && jud == 1){
			cout << "yes" << endl;
			A.clear();
			return ;
		}
	}
	cout << "no" << endl;
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
//	t = 1;
	while(t--){
		solve();
		
	}

	return 0;
}
