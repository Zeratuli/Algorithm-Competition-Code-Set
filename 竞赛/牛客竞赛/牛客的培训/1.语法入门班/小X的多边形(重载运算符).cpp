#include <bits/stdc++.h>

using namespace std;

struct ty{
	double x,y,z;
	ty operator *(const ty b){
		ty t;
		t.x = y*b.z-z*b.y;
		t.y = x*b.z-b.x*z;
		t.z = x*b.y-y*b.x;
		return t;
	}
	ty operator +(const ty b){
		ty t;
		t.x = x + b.x;
		t.y = y + b.y;
		t.z = z + b.z;
		return t;		
	}
	ty operator /(const int k)
	{
		ty t;
		t.x = x/k;
		t.y = y/k;
		t.z = z/k;
		return t;	
	}
}c[10000];

double len(ty a){
	return sqrt(a.x*a.x+a.y*a.y+a.z*a.z);	
}

int main(void)
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> c[i].x >> c[i].y;
		c[i].z = 0;	
	}
	ty sum;
	sum.x = 0; sum.y = 0; sum.z = 0; 
	for(int i = 2; i <= n; i++)
	{
		sum = sum + c[i-1]*c[i];
	}
	sum = sum + c[n]*c[1];
	sum = sum / 2; 
	
	printf("%.0lf",len(sum)+0.0000001);
	
	return 0;	
}
