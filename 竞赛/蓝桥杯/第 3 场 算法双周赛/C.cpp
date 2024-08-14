#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void swap(char &A, char &B){
	char Temp = B;
	B = A;
	A = Temp;
	return ;
}

void solve(){
	string A,B;
	cin >> A >> B;//A:ShallowDream B:Joker
	if(A[0] == A[1]){
		cout << "ShallowDream" << endl;
		return ;
	}
	else if(A.find('M') != string::npos && A.find('F') != string::npos){
		cout << "ShallowDream" << endl;
		return ;	
	}
	else{
		string T = {"3456789XJQKA2MF"};
		if(B.find('M') != string::npos && B.find('F') != string::npos){
			cout << "Joker" << endl;
			return ;	
		}
		int a1 = T.find(A[0]);
		int b1 = T.find(A[1]);
		if(a1-b1 > 0){
			swap(A[0],A[1]);
		}
		a1 = T.find(B[0]);
		b1 = T.find(B[1]);
		if(a1-b1 > 0){
			swap(B[0],B[1]);
		}
		if(T.find(A[1])>=T.find(B[1])){
			cout << "ShallowDream" << endl;
			return ;
		}
		else{
			cout << "Joker" << endl;
			return ;
		}

	}



	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}
