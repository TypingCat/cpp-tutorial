#pragma once
#include <string>

// 선언만 된 상태
// 내용은 동일한 이름을 갖는 Person.cpp에 정의됨
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