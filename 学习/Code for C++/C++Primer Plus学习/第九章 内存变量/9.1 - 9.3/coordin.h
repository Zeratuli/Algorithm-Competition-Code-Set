#ifndef __COORDIN_H__
#define __COORDIN_H__

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

#endif
