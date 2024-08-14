#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	string A;
	string B;
	cin >> n;
	cin >> A;
	int len = A.length();
	if(A.find("hen") != string::npos){
		B.clear();
		int pos = A.find("hen");
		B += A.substr(0,pos);
		B += A.substr(pos+3,len);
		A = B;
		B.clear();
		len = A.length();
	}
	if(A.find("hui") != string::npos){
		B.clear();
		int pos = A.find("hui");
		B += A.substr(0,pos);
		B += A.substr(pos+3,len);
		A = B;
		B.clear();
		len = A.length();
	}
	cout << A << endl;
	return ;
}

signed main(void){
	int t = 1;
	while(t--){
		solve();
	}

	return 0;
}
