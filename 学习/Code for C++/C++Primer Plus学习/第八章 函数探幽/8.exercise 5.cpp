#include <iostream>

using namespace std;

template <typename T>
T max5(T arr[5],T temp = 0);

int main(void)
{
	int arr1[5] = {1,23,34,32,4};
	double arr2[5] = {1,2,4,6.5,2.7};
	
	int a = max5(arr1);
	double b = max5(arr2);
	
	cout << a << " " << b << endl;
	
	return 0;
}

template <typename T>
T max5(T arr[5],T temp)
{
	int i = 0;
	for(int j = 0; j < 5; j++)
	{
	if(arr[i]<arr[i+1])
		temp = arr[i+1];
	i++;
	}
	return temp;
}
