#include <iostream>

using namespace std;

int main(void)
{
	int rats = 101;
	int &rodens = rats;
	int &abcd = rodens;
//	int &abcd = rats;//����������ͬʱ���ڣ���Ϊһ������ֻ��Ӧһ�����ݣ�������ָ��ͬһ���ݵ�����Ҳ���У� 
	
	cout << rats << " " << rodens << " " << abcd << endl;
	cout << &rats << " " << &rodens << endl;
	
	int bunnies = 50;
	rodens = bunnies;//����ʵ��һ����ֵ��� 
	
	cout << rodens << endl;
	cout << rats << endl;
	cout << abcd << endl;
		
	return 0;
}
