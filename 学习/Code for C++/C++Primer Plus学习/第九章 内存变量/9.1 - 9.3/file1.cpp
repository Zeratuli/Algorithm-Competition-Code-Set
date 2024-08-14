#include <iostream>
#include "coordin.h"

int main(void)
{
	rect rplace;
	polar pplace;
	
	cout << "Ente the x and y values: "; //输入x，y值，转化为极坐标系 
	
	while(cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit):";
	}
	
	return 0;
}
