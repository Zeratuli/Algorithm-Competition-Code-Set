#include <iostream>

using namespace std;

int main(void)
{
	int rats = 101;
	int &rodens = rats;
	int &abcd = rodens;
//	int &abcd = rats;//这两个不能同时存在，因为一个引用只对应一个内容（就算是指向同一内容的名称也不行） 
	
	cout << rats << " " << rodens << " " << abcd << endl;
	cout << &rats << " " << &rodens << endl;
	
	int bunnies = 50;
	rodens = bunnies;//这其实是一个赋值语句 
	
	cout << rodens << endl;
	cout << rats << endl;
	cout << abcd << endl;
		
	return 0;
}
