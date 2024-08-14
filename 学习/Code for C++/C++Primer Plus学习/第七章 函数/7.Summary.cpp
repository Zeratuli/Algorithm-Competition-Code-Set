//匹配的函数原型：


void igor(void) 
float tofu(int i) 
double mpg(double a,double b)
long summation(long [],int)
double doctor(const char *str)
void ofcourse(boss bs)
char plot((map *pt)

void apple(int arr[],int size,int value)
{
	for(int i = 0;i < size; i++)
		arr[i] = value;
}

void arr(int *begin,int *end,int n)
{
	for(int *pt = begin;pt != end; pt++)
	{
		*pt = value;
	}
}

double arr(const double a[], const double n)
{
	double max = a[0]
	for(i = 0; i<n; i++)
	{
		if(max < a[i])
			max = max[i];
	}

	return max;
}

int replace(char *str,char c1,char c2);
{
	int i = 0;

	while(*str)
	{
		if(*str == c1)
		{	
			*str = c2;
			i++;
		}
		str++;
	}
	return i;
}

int judge(int (*pf)(const char *));
{
	return *pf;
}

struct applicant
{
	char name[30];
	int credit_ratings[3];
};

void str(applicant a)
{
	cout << a.name << a.credit_ratings;
}

void str(applicant *b)
{
	cout << b->name << b->credit_ratings;
}

void f1(applicant *a);
const char *f2(const applicant *a1, const applicant *a2);

typedef void (*p_1)(applicant *a)
p_1 p1 = f1;
typedef const char (*p_2)(const applicant *a1, const applicant *a2);
p_2 p2 = f2;

p_1 ap[5];
p_2 (*pa)[10];

