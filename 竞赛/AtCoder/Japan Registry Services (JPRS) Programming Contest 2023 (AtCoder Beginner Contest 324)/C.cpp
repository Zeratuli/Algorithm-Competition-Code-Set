#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
string C;
int n;
struct A{
	string B;
	bool jud = false;
}A[N];

bool jud1(string A){
	int cnt = 0;
	int a = A.length();
	int b = C.length();
	for(int i = 0 ,j = 0; i < A.length(); i++){
		if(A[i] == C[j]) {
			//cout << A[i] << " " << C[j] << endl;
			j++;
			continue;
		}
		else{
			cnt++;
			A.erase(i,1);
			i--;
			if(cnt >= 2) break;
		}
	}
	cout << endl;
	if(cnt == 1) {return true;}
	return false;
}

bool jud2(string A){
	int cnt = 0;
	for(int i = 0, j = 0; i < n,j < n; i++,j++){
		if(A[i] == C[j]) continue;
		else{
			cnt++;
			i--;
			if(cnt >= 2) return false;
		}
	}
	if(cnt == 1) return true;
	return false;
}

bool jud3(string A){
	int cnt = 0;
	if(A.length() == C.length()){
		for(int i = 0, j = 0; i < n; i++,j++){
			if(A[i] == C[j]) continue;
			else cnt++;
			if(cnt >= 2) return false;
		}
	}
	else return false;

	if(cnt == 1) return true;
	return false;
}

void solve(){
	cin >> n;
	cin >> C;
	int ans = 0;
	for(int i = 0; i < n; i++)
		cin >> A[i].B;
	int a2 = C.length();
	for(int i = 0; i < n; i++){
		int a1 = A[i].B.length();
		if(abs(a1-a2) >= 2){A[i].jud = false;continue;}
		if(A[i].B == C) {A[i].jud = true;ans++;}
		else if((a1-a2>0)&&jud1(A[i].B)) {A[i].jud = true;ans++;}
		else if((a1-a2<0)&&jud2(A[i].B)) {A[i].jud = true;ans++;}
		else if((a1==a2)&&jud3(A[i].B)) {A[i].jud = true;ans++;}
	}
	if(ans!=0){
		cout << ans << endl;
		for(int i = 0; i < n; i++){
			if(A[i].jud) cout << i+1 << " ";
		}
	}
	else
		cout << ans << endl;
	
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
