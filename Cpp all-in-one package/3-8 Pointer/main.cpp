#include <iostream>

int main()
{
	{
		int num = 100;
		int* pNum = &num;	// ����Ʈ = �ּҸ� �����ϴ� ����
		std::cout << *pNum;	// ������ = �޸� ������
	}
	{
		int arr[] = { 1, 2, 3 };
		int* pArr = arr;
	}

}