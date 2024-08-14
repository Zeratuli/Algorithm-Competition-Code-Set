#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 65536;
const int N = 1e6+100;
string A;
int aans = 0;
bool judge = false;
int ans = 0;
int Fa[mod+10];

int pwr(int a, int b){
	int l;
	l = pow(a,b);
	l = l % mod;
	return l;
}

int cal(int l,int r){
	for(int i = l; i <= r; i++){
		ans = (ans*10 + (A[i]-'0'))%mod;
	}
	cout << " HH " << endl;
	return ans;
}

int solve(int l,int r){
	int len = A.length()-1;
	int pos1 = -1, pos2 = -1, pos3 = -1, pos4 = -1;//加减，乘除，乘方，阶乘的次数
	for(int i = l; i <= r; i++){
		if(A[i] == '+' || A[i] == '-') pos1 = i;
		if(A[i] == '*' || A[i] == '/') pos2 = i;
		if(A[i] == '^') pos3 = i;
		if(A[i] == '!') pos4 = i;
	}
	if(pos1 == -1 && pos2 == -1 && pos3 == -1 && pos4 == -1){
		return cal(l,r)%mod;
	}
    if (pos1 != -1) {
        if (A[pos1] == '+')
            return (solve(l, pos1 - 1) + solve(pos1 + 1, r)) % mod;
        else if (A[pos1] == '-')
            return (solve(l, pos1 - 1) - solve(pos1 + 1, r)+mod) % mod;
    } 
    else if (pos2 != -1) {
        if (A[pos2] == '*')
            return (solve(l, pos2 - 1) * solve(pos2 + 1, r)) % mod;
        else if (A[pos2] == '/') {
            if (solve(pos2 + 1, r) == 0){
				judge = true;
				return 65536;
            }
            else
                return (solve(l, pos2 - 1) / solve(pos2 + 1, r)) % mod;
        }
    } 
    else if (pos3 != -1) {
        return pwr(solve(l, pos3 - 1), solve(pos3 + 1, r)) % mod;
    } 
    else if (pos4 != -1) {
        int a = solve(l, pos4 - 1)%mod;
        return Fa[a];
    }
    return 0;
}

signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

 	int n;

 	Fa[0] = 0;//打表
 	for(int i = 0; i < mod; i++){
 		Fa[i] = (Fa[i-1]*i)%mod;
 	}

 	cin >> n;
 	while(n--){
 		cin >> A;
 		int al = solve(0,A.length()-1);
 		if(judge)
 			cout << "ArithmeticException" << endl;
 		else
 			cout << al;
 	}

    return 0;
}