#include <iostream>
#include <string>
//#include <algorithm>
//#include <time.h>


//clock_t start,stop;
using namespace std;

#define SIZE 5200

int main(void)
{
	int a[SIZE];
	int b[SIZE];
	int c[SIZE];
	string A,B;//char A[100];
	cin >> A >> B; // == scanf("%s%s",&A,&B);
//	start  = clock();
	int len = max(A.length(),B.length());
	for(int i = A.length() - 1,j = 1; i >= 0; i--,j++){
		a[j] = A[i] - '0';
//		printf("a[%d] = %d A[%d] = %c\n",j,a[j],i,A[i]);
	}
	for(int  i = B.length() - 1,j = 1; i >= 0; i--,j++){
		b[j] = B[i] - '0';
	}
	for(int i = 1; i <= len; i++){
		c[i] = c[i] + a[i] + b[i];
		c[i+1] = c[i]/10;
		c[i] %= 10;
	}
	if(c[len+1])
		len++;
	for(int i = len; i >= 1; i--)
		cout << c[i];
		
	stop = clock();
	double t =  ((double)(stop-start))/CLK_TCK;
	cout << " time: " << t << endl;
	
	return 0;
}
