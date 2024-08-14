#include <iostream>
#include <cmath>

int main(void)
{
	long long n;
	std::cin >> n;
	long long a = 0,k = 0,sum = 0;
	for(int i = 2; i <= n; i++){
		for(int j = 2;j <= sqrt(i); j++){
			if(i % j == 0){
				a++;
				if(a > 1)
					break;
			}
		}
		if((a == 0) && (sum + i <= n)){
			printf("%d\n",i);
			sum += i;
			k++;
		}
		a = 0;
	}
	printf("%lld",k);
	
	return 0;
}
