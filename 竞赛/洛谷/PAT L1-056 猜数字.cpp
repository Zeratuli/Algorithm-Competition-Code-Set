#include <bits/stdc++.h>

using namespace std;

struct stu{
	char name[30];
	int n;
	int S; 
};

int main(void)
{
	int n,aver = 0,K = 1;
	cin >> n;
	stu stud[n+1];
	for(int i = 1; i <= n; i++){
		cin >> stud[i].name;
		cin >> stud[i].n;
		stud[i].S = i;
	}
	for(int i = 1; i<= n; i++)
		aver += stud[i].n;
	aver = aver/n;
	aver /= 2;
	for(int j = 1; j <= n; j++)
		K = (abs(aver - stud[K].n) < abs(aver - stud[j].n)) ? stud[K].S : stud[j].S;
	cout << aver << " " << stud[K].name << endl;
	
	return 0;	
}
