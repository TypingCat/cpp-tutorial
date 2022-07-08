#include <iostream>
#include <string>
#include <array>

int main()
{
	// 배열
	int A[3];
	int B[] = { 1, 2, 3 };
	int C[][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	// 문자열
	std::string D = "Hell world";
	std::string E = std::to_string(123.4);
	float F = std::stof("567.8");

	// 구조체
	struct Person
	{
		std::string name;
		float height;
	};
	Person G = {"David", 165};

	// 열거형
	enum ColorA
	{
		Red, Green
	};
	enum struct ColorB		// 범위 열거
	{
		Red, Green, Blue, Alpha = 50
	};
	enum ColorC: int64_t	// 데이터타입 명시
	{
		Blue = 10000000000
	};	
	std::cout << Green;
	std::cout << (float)ColorB::Alpha << std::endl;

	// 배열
	std::array<int, 3> H{ 1, 2, 3 };
	std::cout << H.size();
	std::cout << H.front() << H.back() << std::endl;
	
	// 반복문
	for (int h : H)
	{
		std::cout << h;
	}
}