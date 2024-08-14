#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

int A[10][10];
map<int,int> mp;
void solve(){
	mp.insert(pair<int,int>(1,0));
	mp.insert(pair<int,int>(2,0));
	mp.insert(pair<int,int>(3,0));
	mp.insert(pair<int,int>(4,0));
	mp.insert(pair<int,int>(5,0));
	mp.insert(pair<int,int>(6,0));
	mp.insert(pair<int,int>(7,0));
	mp.insert(pair<int,int>(8,0));
	mp.insert(pair<int,int>(9,0));
	for(int i = 1; i <= 9; i++)
		for(int j = 1; j <= 9; j++)
			cin >> A[i][j];
		
	
	for(int i = 1; i <= 3; i++){//1
		for(int j = 1; j <= 3; j++){
			//cout << A[i][j] << " ";
			mp[A[i][j]]++;
		}
		//cout << endl;
	}
	for(int i = 1; i <= 9; i++){
		//cout << mp[i] << " ";
		if(mp[i] == 0){
			cout << "No" << endl;
			return ;
		}
	}
	mp.clear();
	for(int i = 1; i <= 3; i++){//2
		for(int j = 4; j <= 6; j++){
			//cout << A[i][j] << " ";
			mp[A[i][j]]++;
		}
		//cout << endl;
	}
	for(int i = 1; i <= 9; i++){
		//cout << mp[i] << " ";
		if(mp[i] == 0){
			cout << "No" << endl;
			return ;
		}
	}
	mp.clear();
	for(int i = 1; i <= 3; i++){//3
		for(int j = 7; j <= 9; j++){
			//cout << A[i][j] << " ";
			mp[A[i][j]]++;
		}
		//cout << endl;
	}
	for(int i = 1; i <= 9; i++){
		//cout << mp[i] << " ";
		if(mp[i] == 0){
			cout << "No" << endl;
			return ;
		}
	}
	mp.clear();
	for(int i = 4; i <= 6; i++){//4
		for(int j = 1; j <= 3; j++){
			//cout << A[i][j] << " ";
			mp[A[i][j]]++;
		}
		//cout << endl;
	}
	for(int i = 1; i <= 9; i++){
		//cout << mp[i] << " ";
		if(mp[i] == 0){
			cout << "No" << endl;
			return ;
		}
	}
	mp.clear();
	for(int i = 4; i <= 6; i++){//5
		for(int j = 4; j <= 6; j++){
			//cout << A[i][j] << " ";
			mp[A[i][j]]++;
		}
		//cout << endl;
	}
	for(int i = 1; i <= 9; i++){
		//cout << mp[i] << " ";
		if(mp[i] == 0){
			cout << "No" << endl;
			return ;
		}
	}
	mp.clear();
	for(int i = 4; i <= 6; i++){//6
		for(int j = 7; j <= 9; j++){
			//cout << A[i][j] << " ";
			mp[A[i][j]]++;
		}
		//cout << endl;
	}
	for(int i = 1; i <= 9; i++){
		//cout << mp[i] << " ";
		if(mp[i] == 0){
			cout << "No" << endl;
			return ;
		}
	}
	mp.clear();
	for(int i = 7; i <= 9; i++){//7
		for(int j = 1; j <= 3; j++){
			//cout << A[i][j] << " ";
			mp[A[i][j]]++;
		}
		//cout << endl;
	}
	for(int i = 1; i <= 9; i++){
		//cout << mp[i] << " ";
		if(mp[i] == 0){
			cout << "No" << endl;
			return ;
		}
	}
	mp.clear();
	for(int i = 7; i <= 9; i++){//8
		for(int j = 4; j <= 6; j++){
			//cout << A[i][j] << " ";
			mp[A[i][j]]++;
		}
		//cout << endl;
	}
	for(int i = 1; i <= 9; i++){
		//cout << mp[i] << " ";
		if(mp[i] == 0){
			cout << "No" << endl;
			return ;
		}
	}
	mp.clear();
	for(int i = 7; i <= 9; i++){//9
		for(int j = 7; j <= 9; j++){
			//cout << A[i][j] << " ";
			mp[A[i][j]]++;
		}
		//cout << endl;
	}
	for(int i = 1; i <= 9; i++){
		//cout << mp[i] << " ";
		if(mp[i] == 0){
			cout << "No" << endl;
			return ;
		}
	}
	mp.clear();
	for(int i = 1; i <= 9; i++){
		for(int j = 1; j <= 9; j++){
			mp[A[i][j]]++;

		}
		for(int k = 1; k <= 9; k++){
			if(mp[k] == 0){
				cout << "No" << endl;
				return ;
			}
		}
		mp.clear();
	}
	for(int i = 1; i <= 9; i++){
		for(int j = 1; j <= 9; j++){
			mp[A[j][i]]++;

		}
		for(int k = 1; k <= 9; k++){
			if(mp[k] == 0){
				cout << "No" << endl;
				return ;
			}
		}
		mp.clear();
	}
	cout << "Yes" << endl;
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	while(t--){
		solve();
	}

	return 0;
}
