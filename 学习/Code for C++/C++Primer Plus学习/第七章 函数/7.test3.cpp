#include <iostream>

using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void boxut_a(box a1);
void boxut_b(box *a2);

int main(void)
{
	box a1 = {"I wanna to get ChatGPT.", 10, 5, 20};
	
	boxut_a(a1);
	boxut_b(&a1);
	
	return 0;
 } 
 
void boxut_a(box a1)
{
	cout << a1.height  << endl;
	cout << a1.length  << endl;
	cout << a1.maker  << endl;
	cout << a1.width << endl;
	cout << endl;
}

void boxut_b(box *a2)
{
	a2->volume = (a2->height*a2->length*a2->width);
	cout << a2->height << endl;
	cout << a2->length << endl;
	cout << a2->maker << endl;
	cout << a2->width << endl;
	cout << a2->volume << endl;
}
