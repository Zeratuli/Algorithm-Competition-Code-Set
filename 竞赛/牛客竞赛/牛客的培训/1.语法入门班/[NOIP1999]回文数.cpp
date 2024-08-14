#include <bits/stdc++.h>
#define int long long
using namespace std;

int len;
int m[10000],c[10000];
int n;

void pre(string A){
	for(int i = 0, j = len; i < len; i++,j--){
		if(A[i] >= '0' && A[i] <= '9') m[j] = A[i] - '0';
		else m[j] = A[i] - 'A' + 10;
	}
	return ;
}

bool judge(int m[]){
	for(int i = 1, j = len; i <= j; i++, j--){
		if(m[i] != m[j])
			return 0;
	}
	return 1;
}
void cal(int m[]){
	memset(c,0,sizeof(c));
	for(int i = 1,j = len; i <= len; i++,j--){
		c[i] += m[i] + m[j];
//		cout << c[i] << "\n";
		if(c[i] >= n){
			c[i+1] += c[i]/n;
			c[i] %= n;
//			cout << c[i] << "\n";
		}
	}
	if(c[len+1])
		len++;
	for(int i = 1; i <= len; i++)
		m[i] = c[i];
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	string M;
	cin >> n >> M;
	len = M.length();
	pre(M);
	int step = 0;
	while(step <= 30 && !judge(m)){
//		cout << "AK" << endl;
		cal(m);
		step++;
	}
	if(step > 30) cout << "Impossible!" << endl;
	else cout << "STEP=" << step << endl;
	
	return 0;
}

