#include <iostream>

int main()
{
	std::cout << typeid(1.5f + 1).name() << std::endl;	// �ڵ� ����ȯ

	float a = 1.5f;
	int i = static_cast<int>(a);	// static_cast: ����� ����ȯ

	// const_cast: �������� ������� ��� ����
	// static_cast, dynamic_cast: ��Ӱ��� Ŭ���� ������ �� ����ȯ ����

	int b = 123;
	int* pb = &b;
	char* c;
	c = reinterpret_cast<char*>(pb);	// reinterpret_cast: �����͸� ������ Ÿ������ ��ȯ
}