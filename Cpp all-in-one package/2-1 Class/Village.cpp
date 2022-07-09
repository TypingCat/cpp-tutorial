#include <iostream>
#include "Village.h"
#include "Person.h"

int Village::population = 0;

void Village::add(Person person)
{
	persons.push_back(person);
}

void Village::print()
{
	std::cout << population << std::endl;
}