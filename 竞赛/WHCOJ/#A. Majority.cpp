#include <bits/stdc++.h>

using namespace std;
 
const int SIZE = 10000;
 
 
struct ty{
	string A;
}a[SIZE];
 
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	int b;
	
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		
		cin >> a[i].A;
		if(a[i].A[0] == 'F'){
			b++;
		}
	}
	
	if(b >= ceil(n*1.0/2))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
		
	
	return 0;
}
