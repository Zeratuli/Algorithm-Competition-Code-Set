#include <bits/stdc++.h>

using namespace std;

char s[60];

int num(int l, int r){
		
}

int cal(int l,int r){
 	int cnt = 0, len1 = -1, len2 = -1, len3 = -1;//括号的数量，+-出现的位置，*/出现的位置，^出现的位置。 
	
	for(int i = l; i <= r; i++){
		if(s[i] == '(') cnt++; 
		if(s[i] == ')') cnt--;
		if(s[i] == '+' || s[i] == '-') len1 = i;
		if(s[i] == '*' || s[i] == '/') len2 = i;
		if(s[i] == '^') len3 = i;
	}
	if(cnt == 0 && len1 == -1 && len2 == -1 && len3 == -1){
		if(s[l] == '(')return cal(l+1,r-1);
		else return num(l+1,r-1);
	}
	else if(len1 != -1){
		if(s[l] == '+') return cal(l,len1-1) + cal(len1+1,r);
		if(s[l] == '-') return cal(l,len1-1) - cal(len1+1,r);
	}
	else if(len2 != -1){
		if(s[l] == '*') return cal(l,len2-1) * cal(len2+1,r);
		if(s[l] == '/') return cal(l,len2-1) / cal(len2+1,r);
	}
	else if(len3 != -1 && s[l] == '^')
		return pow(cal(l,len3-1),cal(len3+1,r));
	
}


int main(void)
{
	cin >> s;
	cout << cal(0,strlen(s)-1);


	return 0;
}
