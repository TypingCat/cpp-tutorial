#include <iostream>
#include <string>

int sum(int, int);	// util.cpp에 정의

int main(int argc, char* argv[])
{
	int total = 0;
	for (int i = 1; i < argc; ++i)
	{
		std::string arg(argv[i]);
		int num = std::stoi(arg);
		total = sum(total, num);
	}

	std::cout << total << std::endl;
}

// 1. Visual Studio에서 빌드
// 2. Windows Powershell 실행
// 3. 경로 C:\Users\fini\source\repos\cpp\Cpp all-in-one package\Debug 로 이동
// 4. 인자를 추가하여 실행: '.\1-10 Build.exe' 10 20 30