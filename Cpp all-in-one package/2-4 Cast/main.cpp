#include <iostream>

int main()
{
	std::cout << typeid(1.5f + 1).name() << std::endl;	// 자동 형변환

	float a = 1.5f;
	int i = static_cast<int>(a);	// static_cast: 명시적 형변환

	// const_cast: 포인터의 상수성을 잠시 해제
	// static_cast, dynamic_cast: 상속관계 클래스 포인터 간 형변환 가능

	int b = 123;
	int* pb = &b;
	char* c;
	c = reinterpret_cast<char*>(pb);	// reinterpret_cast: 포인터를 임의의 타입으로 변환
}