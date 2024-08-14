#include <iostream>

using namespace std;

int main(void)
{
	int a,b,n;
	while(scanf("%d%d",&a,&b)==2){
		if(a==0&&b==0)
			break;
		else
			cout << a+b << endl;
	}
	return 0;	
}
