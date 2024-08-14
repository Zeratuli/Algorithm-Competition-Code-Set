#include <iostream>

using namespace std;

const double *f1(const double *ar, int n);
const double *f2(const double ar[], int n);
const double *f3(const double ar[], int n);

int main(void)
{
	double av[3] = {1112.3, 1542.6, 2227.9};
	
	//part1;
	//p1(p2): pointer to a function
	const double *(*p1)(const double *, int) = f1;
	auto p2 = f2;//与上面等价
	cout << "-----Part 1-----" << endl;
	cout << "Address   Value" << endl; 
	cout << (*p1)(av,3) << ": " << *(*p1)(av,3) << endl;
	cout << p2(av,3) << ": " << *p2(av,3) << endl;
	//part2
	//pa(pb) is a array of pointers
	const double *(*pa[3])(const double *,int) = {f1,f2,f3};
	auto pb = pa;
	cout << "-----Part 2-----" << endl;
	cout << "Address   Value" << endl;
	for(int i = 0; i < 3; i++)
		cout << pa[i](av,3) << ": " << *pa[i](av,3) << endl;
	for(int i = 0; i < 3; i++)
		cout << pb[i](av,3) << ": " << *pb[i](av,3) << endl;
	
	//part3
	//pc(pd) is a pointer to an array of function pointers
	auto pc = &pa;
	const double *(*(*pd)[3])(const double *, int) = &pa;
	cout << "-----Part 3-----" << endl;
	cout << "Address   Value" << endl;
	cout << (*pc)[0](av,3) << ": " << *(*pc)[0](av,3) << endl;
	const double *pdb = (*pd)[1](av,3); // (*pd)[1](av,3) == f2(av,3) 
	cout << pdb << ": " << *pdb << endl;
	cout << (*pd)[2](av,3) << ": " << *(*pd)[2](av,3) << endl;
	/*这里也可以 ：
	cout << *(*pd)[2](av,3) << ": " << *(*(*pd)[2](av,3)) << endl;
	表明*pd与*(*pd)是等价的
	*/ 
	return 0;
}

const double *f1(const double *ar, int n)
{
	return ar; 
}

const double *f2(const double ar[], int n)
{
	return ar + 1;
}

const double *f3(const double ar[], int n)
{
	return ar + 2;
}
