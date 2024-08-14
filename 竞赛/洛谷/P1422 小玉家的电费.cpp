#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	float n,total;
	cin  >> n;
	if(n <= 150)
		total = n*0.4463;
	if(n >= 151 && n <= 400)
		total = (n - 150)*0.4663+150*0.4463;
	if(n >= 401)
		total = (n - 400)*0.5663 + 250*0.4663 + 150*0.4463;

	printf("%.1f",total);

	
	return 0;
}
