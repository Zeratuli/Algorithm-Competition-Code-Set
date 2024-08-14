#include <bits/stdc++.h>
using namespace std;
struct ty{
	int num[1100];
	int len;
};


ty change(string s){
	ty a;
	memset(a.num,0,sizeof(a.num));
	a.len = s.length();
	for(int i = 0, j = a.len; i < a.len; i++, j--){
		a.num[j] = s[i] - '0';
//		cout << a.num[j] << ":a.num[j]\n";
	}
	return a;
}
bool judge(const ty &a, const ty &b){
	if(a.len > b.len) return true;
	if(a.len < b.len) return false;
	for(int i = a.len; i > 0; i--){
		if(a.num[i] > b.num[i]) return true;
		else if(a.num[i] < b.num[i]) return false;
	}
	return true;
}

ty jian(const ty &a,const ty &b){
	ty c;
	memset(c.num,0,sizeof(c.num));
	c.len = a.len;

	for(int i = 1; i <= a.len; i++){
//		cout << c.num[i] << " a.num " << a.num[i] << " b.num " << b.num[i] << "\n";
		c.num[i] += a.num[i] - b.num[i];
//		cout << c.num[i] << " a.num " << a.num[i] << " b.num " << b.num[i] << "\n";
		if(c.num[i] < 0){
	  		c.num[i] += 10;
	  		c.num[i+1] -= 1;
		}
	}
//	cout << c.len << " \n";
	while(c.num[c.len] == 0 && c.len > 1) c.len--;
//	cout << c.len << " \n";
	return c;
}

string rechange(const ty &a){//完成对余数的工作
	if(a.len == 1 && a.num[1] == 0) return "";
	string s = "";
	for(int i = a.len; i > 0; i--){
		s += char(a.num[i] + '0');
	}
	return s;
}

void chu(const string &a, const string &s2){
	ty b = change(s2);//字符串转换为int
	string shang,rest;
	rest = "";
	shang = "";
	for(int i = 0; i < a.length(); i++){
//		cout << "a.length " << a.length() << "\n";
		rest += a[i];
//		cout << "rest " << rest << "\n";
		ty c = change(rest);
//		cout << " c.num " << c.num[i] << " c.len " << c.len << "\n";
//		cout << " b.num " << b.num[i] << " b.len " << b.len << "\n";
		int cnt = 0;
		while(judge(c,b)){
//			cout << "AK\n";
			c = jian(c,b);
//			cout << "AK\n";
			cnt++;
//			cout << cnt << " cnt\n";
		}
		rest = rechange(c);
		shang += char(cnt + '0');
	}
//	if(rest == "") cout << "0" << endl;
// 	else cout << rest << endl;
//	int i = 0;
//	while(shang[i] == '0') i++;
//	for(int j = i; j < shang.length(); j++){
//		cout << shang[j];
//	}
//	cout << endl;
    // 输出商
    int i = 0;
    while (shang[i] == '0') i++;
    if (i == shang.length()) cout << "0";
    else cout << shang.substr(i);
    cout << endl;

    // 输出余数
    cout << rest << endl;
}

int main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	string s1,s2;
	cin >> s1 >> s2;
	chu(s1,s2);
	
 	return 0;
}

