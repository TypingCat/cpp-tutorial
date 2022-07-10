#include <iostream>

template <typename T>	/// 템플릿
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
	swap(a, b);	// int로 작동하는 템플릿
	std::cout << a << b << std::endl;

	float c(1.2), d(3.4);
	std::cout << c << d << std::endl;
	swap(c, d);	// float으로 작동하는 템플릿
	std::cout << c << d << std::endl;
}