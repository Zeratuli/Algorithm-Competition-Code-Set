#include <bits/stdc++.h>
using namespace std;
struct inf{
	string F;
	char i;
	char x[4];
	char y[4];
	char E;
};
int main(void)
{
	string ans[1000];
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,fuza = 0;
	char rubbish[1000];
	cin >> n;
	int L,count = 0;
	string test;
	inf inf[n][10000];
	string E[1000];
	for(int j = 0; j < n; j++){
		cin >> L >> test;
		if(L%2==1){
			ans[j] = "ERR";
			cin.sync();
			for(int i = 0; i < L+1; i++){
				cin.getline(rubbish,1000);
			}
		}
		else{
			L/=2;
			for(int i = 0; i < L; i++){
				cin >> inf[j][i].F >> inf[j][i].i >> inf[j][i].x >> inf[j][i].y;
				 if(strcmp(inf[j][i].F.c_str(), "F") == 0 ){
					if(inf[j][i].y == "n"){
						inf[j][i].y > inf[j][i].x;
					}
					if(inf[j][i].x == "n" || inf[j][i].x == inf[j][i].y)
						continue;
					if(inf[j][i].x < inf[j][i].y)
						fuza++;	
				}
				else{
					ans[j] = "ERR";
					cin.sync();
					for(int k = i; k < L+1; k++){
						cin.getline(rubbish,1000);
					}
				}
			}
			if(L > 1)
				L+1;			
			for(int i = 0; i < L;i++){
				cin >> E[i];
				count++;	
			}
	
			if(fuza == 0 && test == "O(1)")
				ans[j] = "Yes";
			if(fuza == 0 && test != "O(1)")
				ans[j] == "No";
			if(fuza != 0){
				string p1 = "O(n^";
				char p2[1000];
				itoa(fuza,p2,10);
				string p3 = ")";
				string x = p1 + p2 + p3;
				if(x == test)
					ans[j] = "Yes";
				else
					ans[j] = "No";
			}
			if(count != L){
				ans[j] = "ERR";
			}
			count = 0;
		}
	}
	for(int i = 0; i < n; i++)
	{
		cout << ans[i] << endl;		
	}
	return 0;
}
