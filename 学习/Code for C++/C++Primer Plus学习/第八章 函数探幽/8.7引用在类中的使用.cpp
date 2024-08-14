#include <iostream>
#include <string>

using namespace std;

string version1(const string &s1, const string &s2);
const string &version2(string &s1, const string &s2); 
const string &version3(string &s1, const string &s2); 

int main(void) 
{
	string input;
	string result;
	string copy; 
	
	cout << "Enter a string: ";
	getline(cin,input);
	copy = input;
	
	cout << "Your string as entered " << input << endl;
	result = version1(input, "***");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;
	
	cout << "------------------------------" << endl;
	
	result = version2(input,"###");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;
	input = copy;
	
	result = version3(input,"@@@");
	
	return 0;
}

string version1(const string &s1, const string &s2)
{
	string temp;
	temp = s2 + s1 + s2;
	return temp;//按值传递 
}

const string &version2(string &s1, const string &s2)
{
	s1 = s2 + s1 + s2;
	return s1;//返回的是一个string类对象的引用，即按引用传递 
}

const string &version3(string &s1, const string &s2)
{
	string temp;
	temp = s1 + s1 + s2;
	return temp;//返回的也是引用，但返回的是temp的引用，而temp不存在了，所以会出错(能编译过（有警告）但不能正常显示） 
}
