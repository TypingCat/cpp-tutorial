#include <iostream>
#include <string>

int mySum(int, int);			// mySum 선언

int myAbsSum(int x, int y=0)	// 디폴트 매개변수
{
	int z = mySum(x, y);
	return z > 0 ? z : -z;
}

int mySum(int x, int y=0)		// mySum 정의
{
	return x + y;
}

void myAddressSwap(int* px, int* py)	// 주소 전달
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

void myReferenceSwap(int& px, int& py)	// 참조 전달
{
	int temp = px;
	px = py;
	py = temp;
}

int myCount(int x)			// 함수 오버로딩
{
	return x;
}

int myCount(std::string s)	// 함수 오버로딩
{
	return std::stoi(s);
}

int main()
{
	std::cout << myAbsSum(2, 3) << std::endl;

	int x(1), y(2);
	myAddressSwap(&x, &y);
	std::cout << "Address swap: " << x << y << std::endl;
	myReferenceSwap(x, y);
	std::cout << "Reference swap: " << x << y << std::endl;

	std::cout << myCount(1) << myCount("1") << std::endl;

	int (*mySumPointer)(int, int) = &mySum;		// 함수 포인터
	std::cout << "Pointer function: " << (*mySumPointer)(2, 3) << std::endl;
	int (&mySumReference)(int, int) = mySum;	// 함수 참조
	std::cout << "Reference function: " << mySumReference(2, 3) << std::endl;
}
