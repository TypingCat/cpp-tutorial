#include "Person.h"		// 헤더, 선언과 정의 분리
#include "Village.h"

int main()
{
	Person A(200, 100, "Alpha");
	Person B(200, 100, "Beta");

	A.attack(B);
}