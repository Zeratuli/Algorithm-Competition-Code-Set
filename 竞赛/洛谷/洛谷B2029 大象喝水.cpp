#include <bits/stdc++.h> 
using namespace std;
int main(void)
{
	int h,r;
	double s,w;
	cin >> h >> r;
	s = (3.14*r*r*h)/1000;
	w = 20/s;
	if(w>(int)w)
		w = (int)w + 1;
	cout << w;
	return 0;
}
