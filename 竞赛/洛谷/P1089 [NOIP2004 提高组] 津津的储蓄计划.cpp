#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n,m,X,o,p = 0,k = 0,z = 0;
	double q = 0;
	for(int i = 1; i <= 12; i++){
		cin >> n;
		m = 300 + z;
		o = m-n;
		if(o >= 100){
			p = o / 100;
			q += p*100;
			z = o%100;
//			cout << " z " << z << " o " << o << " p " << p << " q " << q << "\n";
		}
		else if(o < 0){
			k = 1;
			X = i;
			break;
		}
		else{
			z = o;
//			cout << " else z " << z << "\n"	;
		}

	}
	if(k != 1){
		q = q + q*0.2 + z;
		cout << q << endl;
	}
	if(k == 1)
	{
		printf("-%d",X);	
	}
	
	return 0;
}
