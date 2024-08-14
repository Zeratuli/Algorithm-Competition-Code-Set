#include <iostream>
#include "four.h"

using namespace std;


namespace SALES
{
	void setSales(Sales &s, const double ar[], int n)
	{
		int i;
		double total = 0.0;
		for(i = 0; i < n && i < 4; i++)
		{
			s.sales[i] = ar[i];
			total += s.sales[i];		
		}
	
		s.average = total/i;
		s.max = s.sales[0];
		s.min = s.sales[0];
	
		for(int j = 0; j < 4 && j < n; j++)
		{
			s.max = (s.max > s.sales[j]) ? s.max : s.sales[j];
			s.min = (s.min < s.sales[j]) ? s.min : s.sales[j];
		}
	
	}
	void setSales(Sales &s)
	{
		double total = 0.0;
	
		cout << "Enter four sales quarters: " << endl;
		for(int i = 0; i < QUARTERS; i++)
		{
			cout << "#" << i+1 << ": ";
			cin >>  s.sales[i];
			total += s.sales[i];
		
			if(i == 0)
			{
				s.max = s.sales[i];
				s.min = s.sales[i];
			}
			else
			{
				s.max = (s.max > s.sales[i]) ? s.max : s.sales[i];
				s.min = (s.min < s.sales[i]) ? s.min : s.sales[i];
			}
		}
		s.average = total/QUARTERS;
	}
	void showSales(const Sales &s)
	{
		cout << "The sales' average:" << endl;
		for(int i = 0; i < QUARTERS; i++)
			s.sales[i];
		cout << "The sales' max: " << s.max << endl;
		cout << "The sales' min: " << s.min << endl;
		cout << "The sales' code: " << s.sales << endl;
	}
}
