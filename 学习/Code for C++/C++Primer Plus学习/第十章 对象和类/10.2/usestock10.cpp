#include <iostream>
#include "stock10.h"

int main(void)
{
//	Stock fluffy_the_cat;
//	fluffy_the_cat.acquire("Nanosmart", 20, 12.50);
//	fluffy_the_cat.show();
//
//	fluffy_the_cat.buy(15, 18.125);
//	fluffy_the_cat.show();
//	
//	fluffy_the_cat.sell(400, 20);
//	fluffy_the_cat.show();
//	
//	fluffy_the_cat.buy(40000,20);
//	fluffy_the_cat.show();


	Stock stock1("Nanosmart", 12, 20.0);//隐式调用构造函数 
	stock1.show();
	Stock stock2 = Stock("Boffo objects", 2, 20.0);//显式调用构造函数 
	stock2.show();
	
	std::cout << "Assigning stock1 to stock2. \n";
	stock2 = stock1;
	std::cout << "Listing  stock1 and  stock2: \n";
	stock1.show();
	stock2.show();
	
	std::cout << " Using a constructorto reset an object:\n";
	stock1 = Stock("Nifty Foods", 10, 50.0);
	std::cout << "Revised stock1: \n";
	stock1.show();
	std::cout << "Done!\n";
	
	const  Stock land   = Stock("Klu proper", 3, 3.0);
	land.show();
	
//	Stock stock1;//默认构造隐式	
//	stock1.show();
//	Stock stock2 = Stock();//显式 
//	Stock *prelief = new Stock;//隐式 
//	 
//	delete prelief;
	
	return 0;
}
