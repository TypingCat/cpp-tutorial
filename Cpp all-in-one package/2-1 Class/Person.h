#pragma once
#include <string>

// ���� �� ����
// ������ ������ �̸��� ���� Person.cpp�� ���ǵ�
class Person
{
private:
	int _health;
	int _power;
	std::string _name;

public:
	Person(int, int, std::string);
	Person();
	~Person();

	void attack(Person&) const;
	void damaged(int);
};