#include <bits/stdc++.h>
#define int long long
using namespace std;

int card[250000];
int n;

void solve(){	
	cin >> n;
	int q,w = 0;
	for(int i = 0; i < n; i++){
		cin >> q;
		card[q]++;
	}
	int p = 1;
	while(1){
		for(int i = p; i < p+5; i++){
			card[p-1]--;
		}
		int jud = 0;
		for(int  i = 0; i < n; i++){
			jud += card[i];
		}
		if(jud == 0)
			break;
		else if(jud < 0){
			cout << "No" << endl;
			w = 1;
			break;
		}
		else
			continue;
	}
	if(w == 0)
		cout << "Yes" << endl;
		

	return ;	
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	memset(card,0,sizeof(card));
	int t;
	while(t--){
		solve();
	}



	return 0;
}

