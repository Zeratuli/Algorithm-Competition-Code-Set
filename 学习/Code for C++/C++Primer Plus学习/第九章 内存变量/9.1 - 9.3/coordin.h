#ifndef __COORDIN_H__
#define __COORDIN_H__

using namespace std;

struct polar //������ϵ 
{
	double distance;
	double angle;
};

struct rect //ֱ������ϵ 
{
	double x;
	double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif
