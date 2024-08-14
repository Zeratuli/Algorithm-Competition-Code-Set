#include <bits/stdc++.h>
#include <array>

using namespace std;

struct stu{
	char name[30];
	int Chinese;
	int Math;
	int English;
}stud;

int main(void)
{
	int n,j=0;
	scanf("%d",&n);
	stu stud[n];
	int sum[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%s",&stud[i].name);
		scanf("%d",&stud[i].Chinese);
		scanf("%d",&stud[i].Math);
		scanf("%d",&stud[i].English);
		sum[i] = stud[i].Chinese + stud[i].Math + stud[i].English;
	}

	int temp = sum[0];

	for(int i = 0; i < n; i++)
	{
		if(temp < sum[i]){
			temp = sum[i];
			j = i;
		}
	}
	cout << stud[j].name << " " << stud[j].Chinese << " " << stud[j].Math << " " << stud[j].English;
	
	
	return 0;
}
