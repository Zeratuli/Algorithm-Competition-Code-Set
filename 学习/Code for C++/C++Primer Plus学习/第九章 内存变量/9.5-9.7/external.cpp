#include <iostream>
#include "support.h"

using namespace std;

double warming = 0.3;//ȫ�ֱ��� 

int main(void)
{
	cout << "Global warming is " << warming << " degrees." << endl;
	update(0.1);
	cout << "Global warming is " << warming << endl;
	local();
	
	return 0;
}
