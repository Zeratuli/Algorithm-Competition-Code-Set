#include <bits/stdc++.h>

using namespace std;

int f1(int n)
{
	if(n == 1) return 1;
	return n+f1(n-1);
}


int main(void)
{
	char a;
	char c[100];
	int b[10];
	int n,t,k;
	cin >> a >> n;
	if(a == '*'|| a == '=' || a == ','){
		t = f1(n);
		cout << t;
	}
	if(a >= '0' && a <= '9'){
		a = int(a);
		for(int q=1;q<=n;q++)
   			for(int j=1;j<=q;j++){
   		   		k = j;
   		   		string A = to_string(k);
				int len = A.length();
				for(int i = 1; i <= len; i++){
					c[i] = A[i] - '0';
						switch(c[i]){
							case 0:
								b[0]++;
								break;
							case 1:
								b[1]++;
								break;
							case 2:
								b[2]++;
								break;
							case 3:
								b[3]++;
								break;
							case 4:
								b[4]++;
								break;
							case 5:	
								b[5]++;
								break;		
							case 6:
								b[6]++;
								break;
							case 7:
								b[7]++;
								break;
							case 8:
								b[8]++;
								break;
							case 9:
								b[9]++;
								break;
					}
				}
			}
		for(int q=1;q<=n;q++)
   			for(int j=1;j<=q;j++){
   		   		k = q;
   		   		string A = to_string(k);
				int len = A.length();
				for(int i = 1; i <= len; i++){
					c[i] = A[i] - '0';
						switch(c[i]){
							case 0:
								b[0]++;
								break;
							case 1:
								b[1]++;
								break;
							case 2:
								b[2]++;
								break;
							case 3:
								b[3]++;
								break;
							case 4:
								b[4]++;
								break;
							case 5:	
								b[5]++;
								break;		
							case 6:
								b[6]++;
								break;
							case 7:
								b[7]++;
								break;
							case 8:
								b[8]++;
								break;
							case 9:
								b[9]++;
								break;
					}
				}
			}
		for(int q=1;q<=n;q++)
   			for(int j=1;j<=q;j++){
   		   		k = j*q;
   		   		string A = to_string(k);
				int len = A.length();
				for(int i = 0; i < len; i++){
					c[i] = A[i] - '0';
						switch(c[i]){
							case 0:
								b[0]++;
								break;
							case 1:
								b[1]++;
								break;
							case 2:
								b[2]++;
								break;
							case 3:
								b[3]++;
								break;
							case 4:
								b[4]++;
								break;
							case 5:	
								b[5]++;
								break;		
							case 6:
								b[6]++;
								break;
							case 7:
								b[7]++;
								break;
							case 8:
								b[8]++;
								break;
							case 9:
								b[9]++;
								break;
					}
				}
			}
		cout << b[a] << endl;
	}
   		   
		

	return 0;	
}
