#include <bits/stdc++.h>

using namespace std;

struct ty{
	int num[110],len = 0;
}a,b;
string C = "";
string A = "",B = "";
int al,c[1000];

void cal(ty a,ty b){
	for(int i = 0; i < C.length(); i++){
		a.num[i] = a.num[i] - b.num[i];
		if(a.num[i] < 0){
			a.num[i] = 10 + a.num[i];
			a.num[i+1]--;
		}
	}
}

bool judge(){
	if(B.length() <= C.length()) return 1;
	else if(B <= C) return 1;
	else return 0;
}

void pre_A(string A){
	memset(a.num,0,sizeof(a.num));
	a.len = A.length();
	for(int i = 1; i <= a.len; i++){
		a.num[i] = A[i] - '0';
	}
	return ;
}
void pre_B(string B){
	memset(b.num,0,sizeof(b.num));
	b.len = B.length();
	for(int i = b.len, j = 1; i > 0; i--,j++){
		b.num[j] = B[i-1] - '0';
		cout << b.num[j];
	}
	return ;
}

void div(string A,string B){
	al = a.len;
	while(al--){
		int cnt = 0,k = 0;
		for(int i = 0; i <= b.len; i++){
			C[i] = a.num[i] + '0';
		}
		while(judge())
		{
			cal(a,b);
			cnt++;
		}
		b.len++;
		c[k++] = cnt;
	}
}

int main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string A,B;
	cin >> A >> B;
	pre_A(A);
	pre_B(B);
	div(A,B);
	for(int i = 0; i < a.len; i++)
	{
		cout << a.num[i];
	}
	
	return 0;
}
