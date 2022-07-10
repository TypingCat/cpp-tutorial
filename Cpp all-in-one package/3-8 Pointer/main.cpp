#include <iostream>

int main()
{
	{
		int num = 100;
		int* pNum = &num;	// 포인트 = 주소를 저장하는 변수
		std::cout << *pNum;	// 포인터 = 메모리 접근자
	}
	{
		int arr[] = { 1, 2, 3 };
		int* pArr = arr;
	}

}