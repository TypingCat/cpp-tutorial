#include <iostream>

using std::cout;
using std::endl;

double divide(double a, double b)
{
	if (b == 0)
		throw "Devided by zero";	// ���� ������
	return a / b;
}

int main()
{
	try
	{
		cout << divide(10, 0) << endl;
	}
	catch (const char* e)			// ���� �ޱ�
	{
		cout << e << endl;
	}
	catch (...)
	{
		// �ϴ� �ޱ�
	}
}