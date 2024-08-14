#include <bits/stdc++.h>
#define int long long
using namespace std;

string S;

int chan    ge(int l,int r){
	int ans = 0;
	for(int i = l; i <= r; i++){
		ans = ans*10 + (S[i]-'0');
	}
	return ans;
}
 
int cal(int l, int r){
	int cnt = 0, pos1 = -1, pos2 = -1, pos3 = -1;
	for(int i = l; i <= r; i++){
		if(S[i] == '(') cnt++;
		if(S[i] == ')') cnt--;
		if(cnt <= 0 && (S[i] == '+' || S[i] == '-')) pos1 = i;
		if(cnt <= 0 && (S[i] == '*' || S[i] == '/')) pos2 = i;
		if(cnt <= 0 && S[i] == '^') pos3 = i;
	}
//	cout << l << " " << r << " " <<pos1 << " " << pos2 << " " << pos3 << " " << cnt << endl;
	if(cnt == 0 && pos1 == -1 && pos2 == -1 && pos3 == -1){
		if(S[l] == '(') return cal(l+1,r-1);
		else return change(l,r);
	}
	else if(pos1 != -1){
		if(S[pos1] == '+') return cal(l,pos1-1) + cal(pos1+1,r);
		if(S[pos1] == '-') return cal(l,pos1-1) - cal(pos1+1,r);
	}
	else if(pos2 != -1){
		if(S[pos2] == '*') return cal(l,pos2-1) * cal(pos2+1,r);
		if(S[pos2] == '/') return cal(l,pos2-1) / cal(pos2+1,r);
	}
	else if(pos3 != -1){
		if(S[pos3] == '^') return pow(cal(l,pos3-1),cal(pos3+1,r));
	}
	else if(S[l] == '(' && cnt > 0) return cal(l+1,r);
	else if(S[r] == ')' && cnt < 0) return cal(l,r-1);
	return 0;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	cin >> S;
    cout << cal(0,(S.length()-1));

	return 0;
}

