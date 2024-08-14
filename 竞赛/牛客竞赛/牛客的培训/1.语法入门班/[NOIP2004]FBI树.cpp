#include <bits/stdc++.h>

using namespace std;

char s[1030];

char fbi(int l,int r){
	if(l == r){ 
		cout << (s[l] == '1' ? 'I' : 'B');
		return (s[l] == '1' ? 'I' : 'B');
	}
	int mid = (l+r)/2;
	char cl = fbi(l,mid);//×ó×ÓÊ÷ 
	char cr = fbi(mid+1,r);//ÓÒ×ÓÊ÷ 
	char c;
	if(cl != cr || cl == 'F' || cr == 'F') 
		c = 'F';
	else 
		c = cl;// c = cr; 
	cout << c;
	return c;
}

int main(void){
	int n;
	cin >> n;
	cin >> s;
	fbi(0,(1<<n)-1);	

	return 0;	
}
