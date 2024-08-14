#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e3;

int main(void)
{
	char a[SIZE][SIZE],b[SIZE][SIZE];
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> a[i][j];
	for(int i = 0;i < n+1; i++){
		for(int j = 0; j < m+1; j++)
		{
			int sum = 0;
			if(a[i][j] == '*'){
				b[i][j] = a[i][j];
			}
			else if(a[i][j] == '.' || a[i][j] == '0'){
				
				if(a[i-1][j-1] == '*') sum++;
				if(a[i-1][j] == '*') sum++;
				if(a[i-1][j+1] == '*') sum++;
				if(a[i][j-1] == '*') sum++;
				if(a[i][j+1] == '*') sum++;
				if(a[i+1][j-1] == '*') sum++;
				if(a[i+1][j] == '*') sum++;
				if(a[i+1][j+1] == '*') sum++;
				b[i][j] = sum + '0';
				
			}
		}
	}
	for(int i = 0;i < n; i++){
		for(int j = 0; j < m; j++){
			cout << b[i][j];
		}
		cout << endl;
	}
	return 0;
}
