#ifndef __STOCK10_H__
#define __STOCK10_H__

#include <string>

class Stock
{
	private:
		std::string company;
		long shares;
		double share_val;
		double total_val;
		void set_total() {
		total_val = shares * share_val;
		}
	public:	
		Stock();
//		Stock(const std::string &co = "Error", long n = 0, double pr = 0);
		Stock(const std::string &co, long n, double pr);
		~Stock();
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price);
		void show() const;
};	






#endif
