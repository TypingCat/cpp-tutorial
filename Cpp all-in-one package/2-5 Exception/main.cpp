#include <iostream>

using std::cout;
using std::endl;

double divide(double a, double b)
{
	if (b == 0)
		throw "Devided by zero";	// 오류 던지기
	return a / b;
}

int main()
{
	try
	{
		cout << divide(10, 0) << endl;
	}
	catch (const char* e)			// 오류 받기
	{
		cout << e << endl;
	}
	catch (...)
	{
		// 일단 받기
	}
}