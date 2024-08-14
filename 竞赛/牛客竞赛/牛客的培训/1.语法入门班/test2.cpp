#include <bits/stdc++.h>
#define int long long
using namespace std;
struct ty{
	int num[110],len;
};
string shang,rest;

ty change(string s){
	ty a;
	memset(a.num,0,sizeof(a.num));
	a.len = s.length();
	for(int i = 0, j = a.len; i < a.len; i++, j--){
		a.num[j] = s[i] - '0';
	}
	return a;
}

bool judge(ty a, ty b){
	if(a.len > b.len) return true;
	if(a.len < b.len) return false;
	for(int i = a.len; i > 0; i--)
		if(a.num[i] > b.num[i]) return true;
		else if(a.num[i] < b.num[i]) return false;
	return true;
}

ty jian(ty a, ty b){
	ty c;
	memset(c.num,0,sizeof(c.num));
	c.len = a.len;
	for(int i = 1; i <= a.len; i++){
		c.num[i] += a.num[i] - b.num[i];
		if(c.num[i] < 0){
	  		c.num[i] += 10;
	  		c.num[i+1] -= 1;
		}
	}
	while(!c.num[c.len] && c.len > 1) c.len--;
	return c;
}

string rechange(ty a){//完成对余数的工作
	if(a.len == 1 && a.num[0] == 0) return "";
	string s = "";
	for(int i = a.len; i > 0; i--){
		s += char(a.num[i] + '0');
	}
	return s;
}

void chu(string a, string s2){
	ty b = change(s2);//字符串转换为int
	rest = "";
	shang = "";
	for(int i = 0; i < a.length(); i++){
		rest += a[i];
		ty c = change(rest);
		int cnt = 0;
		while(judge(c,b)){
			c = jian(c,b);
			cnt++;
		}
		rest = rechange(c);
		shang += char(cnt + '0');
	}
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	string s1,s2;
	cin >> s1 >> s2;
	chu(s1,s2);
	if(rest == "") cout << "0" << endl;
 	else cout << rest << endl;
	int i = 0;
	while(shang[i] == '0') i++;
	for(int j = i; j < shang.length(); j++){
		cout << shang[j];
	}
	cout << endl;
 	return 0;
}

