#include <iostream>

template <typename T>	/// ���ø�
void swap(T& x, T& y)
{
	T temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a(0), b(1);
	std::cout << a << b << std::endl;
	swap(a, b);	// int�� �۵��ϴ� ���ø�
	std::cout << a << b << std::endl;

	float c(1.2), d(3.4);
	std::cout << c << d << std::endl;
	swap(c, d);	// float���� �۵��ϴ� ���ø�
	std::cout << c << d << std::endl;
}