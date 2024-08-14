#include <iostream>
#include "stock10.h"

Stock::Stock()
{
	company = "No name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr)
{
	company = co;
	if(n < 0)
	{
		std::cout << "Number of shares can't be negative. " << company << " shares set to be 0.";
		shares = 0;
	}
	else 
		shares = n;
	share_val = pr;
	set_total();
}

Stock::~Stock()
{
	std::cout << "Byyyyye~~~ " << company << "\n";
}

void Stock::buy(long num, double price)
{
	if(num < 0)
	{
		std::cout << "Number of shares can't be negative, Transaction is failed." << std::endl;
	}
	else
	{
		shares += num;
		share_val = price;
		set_total();
	}
}
void Stock::sell(long num, double price)
{
	if(num < 0)
	{
		std::cout << "Number of shares can't be negative, Transaction is failed." << std::endl;
	}
	else if(num > shares)
	{
		std::cout << "You can't sell more than you have! Transaction is aborted." << std::endl;
	}
	else
	{
		shares -= num;
		share_val = price;
		set_total();
	}
}
void Stock::update(double price)
{
	share_val = price;
	set_total();
}
void Stock::show() const
{
	std::cout << "Company: " << company << std::endl;
	std::cout << "Shares: " << shares << std::endl;
	std::cout << "Share price: " << share_val << std::endl;
	std::cout << "Total worth: " << total_val << std::endl;
}
