#pragma once
#include <vector>

class Person;	// ��������� �������� �����

class Village
{
private:
	std::vector<Person> persons;
	static int population;	// ���� ��� ����(=Village �ν��Ͻ����� ����)

public:
	void add(Person);
	static void print();	// ���� ��� �Լ�
};

