#include <bits/stdc++.h>

void swap(int *a, int *b)
{
	int *t;
	t=a;
	a=b;
	b=t;
}
int main()
{
	int x=3, y=5, *p=&x, *q=&y;
	swap(p,q);
	printf("%d %d\n",*p,*q);
	return 0;
}

