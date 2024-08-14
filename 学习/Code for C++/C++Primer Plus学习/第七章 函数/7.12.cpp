#include <iostream>
#include <cmath>


using namespace std;

struct polar //极坐标系 
{
	double distance;
	double angle;
};

struct rect //直角坐标系 
{
	double x;
	double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

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

polar rect_to_polar(rect xypos)
{
	polar answer;
	
	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	
	return answer;
}

void show_polar(polar dapos)
{
	const double Rad_to_deg = 57.29577951;
	
	cout << "Distance = " << dapos.distance << endl;
	cout << "Angle = " << dapos.distance * Rad_to_deg << " degree" << endl;
}
