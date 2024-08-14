#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	double m,h,total;
	
	cin >> m >> h;
	
	total = m/(h*h);
	
	if(total < 18.5)
		cout << "Underweight";
	else if(total >= 18.5 && total < 24)
		cout << "Normal";
	else
		cout << total << "\n" << "Overweight";
			
	
	
	
	return 0;	
}

