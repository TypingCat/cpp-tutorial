#include <iostream>
#include <string>

int sum(int, int);	// util.cpp�� ����

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

// 1. Visual Studio���� ����
// 2. Windows Powershell ����
// 3. ��� C:\Users\fini\source\repos\cpp\Cpp all-in-one package\Debug �� �̵�
// 4. ���ڸ� �߰��Ͽ� ����: '.\1-10 Build.exe' 10 20 30