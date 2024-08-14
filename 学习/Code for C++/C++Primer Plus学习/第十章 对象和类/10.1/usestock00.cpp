#include <iostream>
#include "stock00.h"

int main(void)
{
	Stock fluffy_the_cat;
	fluffy_the_cat.acquire("Nanosmart", 20, 12.50);
	fluffy_the_cat.show();

	fluffy_the_cat.buy(15, 18.125);
	fluffy_the_cat.show();
	
	fluffy_the_cat.sell(400, 20);
	fluffy_the_cat.show();
	
	fluffy_the_cat.buy(40000,20);
	fluffy_the_cat.show();
	
	return 0;
}
