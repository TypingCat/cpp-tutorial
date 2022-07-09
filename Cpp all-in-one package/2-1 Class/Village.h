#pragma once
#include <vector>

class Person;	// 헤더에서는 선언으로 충분함

class Village
{
private:
	std::vector<Person> persons;
	static int population;	// 정적 멤버 변수(=Village 인스턴스들이 공유)

public:
	void add(Person);
	static void print();	// 정적 멤버 함수
};

