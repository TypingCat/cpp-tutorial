#pragma once
#include <iostream>
#include <string>
#include "Person.h"

Person::Person(int health, int power, std::string name = "")	// ������
{
	_health = health;
	_power = power;
	_name = name;
}

Person::Person() : _health(100), _power(50), _name("noname")	// ������, ��� �ʱ�ȭ
{ }

Person::~Person()	// �ı���
{ }

void Person::attack(Person& target) const	// this�� const ������ �ɸ�
{
	target.damaged(_power);
	std::cout << this->_name << " attack " << target._name << std::endl;
}

void Person::damaged(int power)
{
	_health -= power;
	if (_health <= 0)
		std::cout << _name << " dead" << std::endl;
}